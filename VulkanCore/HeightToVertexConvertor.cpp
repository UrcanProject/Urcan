//
// Created by Guillaume on 02/05/2017.
//

#include <iostream>
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
	return {(verticesMod[idx].pos[0] + x) / norm - 1.5,
			(verticesMod[idx].pos[1] + y) / norm,
			(verticesMod[idx].pos[2] + z) / norm};
}

/**
 * [127, 0, 0]
 * [127, 127, 0]
 * [0, 127, 0]
 * [0, 127, 127]
 * [0, 0, 127]
 */

void HeightToVertexConvertor::feed(std::vector<std::vector<uint32_t>> const &heights, int startX, int startZ, uint32_t maxHeight) {
	const double xDiff = abs(startX - heights[0].size()) / 5;
	const double zDiff = abs(startZ - heights.size()) / 5;
	const double norm = sqrt(xDiff * xDiff + zDiff * zDiff);
	std::vector<glm::vec3> colors;

	this->_vertices.resize(verticesMod.size() * heights.size() * heights[0].size());
	this->_indexes.resize(indicesMod.size() * heights.size() * heights[0].size());
	const double step = (4.0 * 127.0) / static_cast<double>(maxHeight);

	const double colIdx = 0.6f;
	colors.push_back({0.0f, 0.0f, colIdx});
	for (double i = 0.0; i <= maxHeight / 4.0; i++)
		colors.push_back({0.0f, step * i * colIdx, colIdx});
	for (double i = 0.0; i <= maxHeight / 4.0; i++)
		colors.push_back({0.0f, colIdx, colIdx - (step * i * colIdx)});
	for (double i = 0.0; i <= maxHeight / 4.0; i++)
		colors.push_back({step * i * colIdx, colIdx, 0.0f});
	for (double i = 0.0; i <= maxHeight / 4.0; i++)
		colors.push_back({colIdx, colIdx - (step * i * colIdx), 0.0f});
	colors.push_back({colIdx, 0.0f, 0.0f});

	for (uint32_t z = 0; z < heights.size(); z++)
		for (uint32_t x = 0; x < heights[0].size(); x++) {
			for (uint32_t i = 0; i < verticesMod.size(); i++)
				this->_vertices[(x + z * heights[z].size()) * verticesMod.size() + i] = {
						combineVec3(i, x + startX, z + startZ, heights[z][x], norm), colors[heights[z][x]]};
			for (uint32_t i = 0; i < indicesMod.size(); i++)
				this->_indexes[(x + z * heights[z].size()) * indicesMod.size() + i] = (
						(x + z * heights[z].size()) * verticesMod.size() + indicesMod[i]);
		}
}

const std::vector<Vertex> &HeightToVertexConvertor::getVertices() const {
	return _vertices;
}

const std::vector<uint32_t> &HeightToVertexConvertor::getIndexes() const {
	return _indexes;
}
