//
// Created by Guillaume on 14/05/2017.
//

#include "Camera.hh"

void Camera::updateViewMatrix() {
	glm::mat4 rotM = glm::mat4();
	glm::mat4 transM;

	if (rotation.x > 360.0)
	rotation.x = (int)rotation.x % 360;
	if (rotation.y > 360.0)
	rotation.y = (int)rotation.y % 360;
	if (rotation.z > 360.0)
	rotation.z = (int)rotation.z % 360;

	//rotation.x = 0;
	//rotation.y = 0;
	rotation.z = 270;

	rotM = glm::rotate(rotM, glm::radians(rotation.x), glm::vec3(1.0f, 0.0f, 0.0f));
	rotM = glm::rotate(rotM, glm::radians(rotation.y), glm::vec3(0.0f, 1.0f, 0.0f));
	rotM = glm::rotate(rotM, glm::radians(rotation.z), glm::vec3(0.0f, 0.0f, 1.0f));

	transM = glm::translate(glm::mat4(), position);

	if (type == CameraType::firstperson)
	{
		matrices.view = rotM * transM;
	}
	else
	{
		matrices.view = transM * rotM;
	}
}

bool Camera::moving() {
	return keys.left || keys.right || keys.up || keys.down;
}

void Camera::setPerspective(float fov, float aspect, float znear, float zfar) {
	this->fov = fov;
	this->znear = znear;
	this->zfar = zfar;
	matrices.perspective = glm::perspective(glm::radians(fov), aspect, znear, zfar);
}

void Camera::updateAspectRatio(float aspect) {
	matrices.perspective = glm::perspective(glm::radians(fov), aspect, znear, zfar);
}

void Camera::setPosition(glm::vec3 position) {
	this->position = position;
	updateViewMatrix();
}

void Camera::setRotation(glm::vec3 rotation) {
	this->rotation = rotation;
	updateViewMatrix();
}

void Camera::rotate(glm::vec3 delta) {
	this->rotation += delta;
	updateViewMatrix();
}

void Camera::setTranslation(glm::vec3 translation) {
	this->position = translation;
	updateViewMatrix();
}

void Camera::translate(glm::vec3 delta) {
	this->position += delta;
	updateViewMatrix();
}

void Camera::update(float deltaTime) {
	if (type == CameraType::firstperson)
	{
		if (moving())
		{
			glm::vec3 camFront;
			camFront.x = -cos(glm::radians(rotation.x)) * sin(glm::radians(rotation.y));
			camFront.y = sin(glm::radians(rotation.x));
			camFront.z = cos(glm::radians(rotation.x)) * cos(glm::radians(rotation.y));
			camFront = glm::normalize(camFront);

			float moveSpeed = deltaTime * movementSpeed;

			if (keys.up)
				position += camFront * moveSpeed;
			if (keys.down)
				position -= camFront * moveSpeed;
			if (keys.left)
				position -= glm::normalize(glm::cross(camFront, glm::vec3(0.0f, 1.0f, 0.0f))) * moveSpeed;
			if (keys.right)
				position += glm::normalize(glm::cross(camFront, glm::vec3(0.0f, 1.0f, 0.0f))) * moveSpeed;

			updateViewMatrix();
		}
	}
}
