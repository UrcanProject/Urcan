//
// Created by Guillaume on 14/05/2017.
//

#ifndef VULKAN_CAMERA_HH
#define VULKAN_CAMERA_HH


#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Singleton.hpp"

class Camera : public Singleton<Camera>
{
private:
	float fov;
	float znear, zfar;

	void updateViewMatrix();

public:
	enum CameraType { lookat, firstperson };
	CameraType type = CameraType::firstperson;

	glm::vec3 rotation = glm::vec3();
	glm::vec3 position = glm::vec3();

	float gravity = 40.0;
	float zVelocity = 0.0f;

	float rotationSpeed = 1.0f;
	float movementSpeed = 1.0f;

	struct
	{
		glm::mat4 perspective;
		glm::mat4 view;
	} matrices;

	struct
	{
		bool left = false;
		bool right = false;
		bool up = false;
		bool down = false;
		bool space = false;
	} keys;

	bool moving();

	void setPerspective(float fov, float aspect, float znear, float zfar);

	void updateAspectRatio(float aspect);

	void setPosition(glm::vec3 position);

	void setRotation(glm::vec3 rotation);

	void rotate(glm::vec3 delta);

	void setTranslation(glm::vec3 translation);

	void translate(glm::vec3 delta);

	void update(float deltaTime);
};


#endif //VULKAN_CAMERA_HH
