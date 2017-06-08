//
// Created by Guillaume on 02/05/2017.
//

#include "Color.hpp"
#include "HeightToVertexConvertor.hh"

static const std::vector<Vertex> verticesMod = {
		{{-0.5f, -0.5f, 0.5f},  {1.0f, 0.0f, 0.0f}},
		{{0.5f,  -0.5f, 0.5f},  {0.0f, 1.0f, 0.0f}},
		{{0.5f,  0.5f,  0.5f},  {0.0f, 0.0f, 1.0f}},
		{{-0.5f, 0.5f,  0.5f},  {1.0f, 1.0f, 1.0f}},
		{{-0.5f, -0.5f, -0.5f}, {0.0f, 0.0f, 1.0f}},
		{{0.5f,  -0.5f, -0.5f}, {1.0f, 1.0f, 1.0f}},
		{{0.5f,  0.5f,  -0.5f}, {1.0f, 0.0f, 0.0f}},
		{{-0.5f, 0.5f,  -0.5f}, {0.0f, 1.0f, 0.0f}}
};

static const std::vector<Vertex> commonVertices = {
		/*{{-0.5f, -0.5f, -0.5f}, {0.0f, 0.0f, 1.0f}},
		{{0.5f,  -0.5f, -0.5f}, {1.0f, 1.0f, 1.0f}},
		{{0.5f,  0.5f,  -0.5f}, {1.0f, 0.0f, 0.0f}},
		{{-0.5f, 0.5f,  -0.5f}, {0.0f, 1.0f, 0.0f}}*/
};

static const std::vector<uint32_t> indicesMod = {
		0, 1, 2, 2, 3, 0,
		6, 5, 4, 4, 7, 6,
		3, 7, 4, 4, 0, 3,
		1, 0, 4, 4, 5, 1,
		2, 1, 5, 5, 6, 2,
		3, 2, 6, 6, 7, 3
};

void HeightToVertexConvertor::clear() {
	this->_vertices.clear();
	this->_indexes.clear();
}

glm::vec3 combineVec3(int32_t idx, int32_t x, int32_t y, int32_t z, double norm) {
	const uint32_t mod = 0;

	return {(verticesMod[idx].pos[0] + x + mod) ,
			(verticesMod[idx].pos[1] + y + mod) ,
			(verticesMod[idx].pos[2] + z + mod) };
}


glm::vec3 combineConstVec3(int32_t idx, int32_t x, int32_t y, int32_t z, double norm) {
	const uint32_t mod = 0;

	return {(commonVertices[idx].pos[0] + x + mod) ,
			(commonVertices[idx].pos[1] + y + mod) ,
			(commonVertices[idx].pos[2] + mod) };
}

void HeightToVertexConvertor::feed(std::vector<std::vector<uint32_t>> const &heights, int startX, int startZ, uint32_t minHeight, uint32_t maxHeight) {
	const double xDiff = abs(startX - heights[0].size()) / 5;
	const double zDiff = abs(startZ - heights.size()) / 5;
	const double norm = sqrt(xDiff * xDiff + zDiff * zDiff + maxHeight * maxHeight);
    Color color;

	this->_vertices.resize((verticesMod.size() + commonVertices.size()) * heights.size() * heights[0].size());
	this->_indexes.resize(indicesMod.size() * heights.size() * heights[0].size());

	for (uint32_t z = 0; z < heights.size(); z++)
		for (uint32_t x = 0; x < heights[0].size(); x++) {
			for (uint32_t i = 0; i < verticesMod.size(); i++)
					this->_vertices[(x + z * heights[z].size()) * (verticesMod.size() + commonVertices.size()) + i] = {
							combineVec3(i, x + startX, z + startZ, heights[z][x], norm), color.getColor(minHeight, maxHeight, heights[z][x])
					};
/*
			for (uint32_t i = verticesMod.size(); i < commonVertices.size() + verticesMod.size(); i++)
				this->_vertices[(x + z * heights[z].size()) * (verticesMod.size() + commonVertices.size()) + i] = {
						combineConstVec3(i - verticesMod.size(), x + startX, z + startZ, heights[z][x], norm), {0.0f, 0.0f, 1.0f}
				};
*/
			for (uint32_t i = 0; i < indicesMod.size(); i++)
				this->_indexes[(x + z * heights[z].size()) * indicesMod.size() + i] =
						((x + z * heights[z].size()) * (verticesMod.size() + commonVertices.size()) + indicesMod[i]);
		}
}

const std::vector<Vertex> &HeightToVertexConvertor::getVertices() const {
	return _vertices;
}

const std::vector<uint32_t> &HeightToVertexConvertor::getIndexes() const {
	return _indexes;
}
