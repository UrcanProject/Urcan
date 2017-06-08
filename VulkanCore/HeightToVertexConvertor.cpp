//
// Created by Guillaume on 02/05/2017.
//

#include <c++/4.8.3/iostream>
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

glm::vec3 combineVec3(int32_t idx, int32_t x, int32_t y, int32_t z) {
	return {(verticesMod[idx].pos[0] + x),
	        (verticesMod[idx].pos[1] + y),
	        (verticesMod[idx].pos[2] + z)};
}

uint32_t needed_block(uint32_t height, std::vector<uint32_t> const &heights) {
	uint32_t max_diff = 0;

	for (auto z : heights)
		if (height > z + 1 && height - z > max_diff)
			max_diff = height - z;
	return max_diff;
}

uint32_t count_blocks(std::vector<std::vector<uint32_t>> const &heights) {
	uint32_t count = 0;

	for (uint32_t y = 0; y < heights.size(); y++)
		for (uint32_t x = 0; x < heights[y].size(); x++) {
			count += 1 + needed_block(heights[y][x], {
					y > 0 ? heights[y - 1][x] : heights[y][x],
					x > 0 ? heights[y][x - 1] : heights[y][x],
					y < heights.size() - 1 ? heights[y + 1][x] : heights[y][x],
					x < heights[y].size() - 1 ? heights[y][x + 1] : heights[y][x],
			});
		}
	return count;
}

void HeightToVertexConvertor::feed(std::vector<std::vector<uint32_t>> const &heights, int startX, int startZ,
                                   uint32_t minHeight, uint32_t maxHeight) {
	Color color;
	uint32_t blocks = count_blocks(heights);

	std::cout << "Number of blocks = " << blocks << std::endl;

	this->_vertices.resize((verticesMod.size()) * blocks);
	this->_indexes.resize(indicesMod.size() * blocks);

	uint32_t last_vertices = 0;
	uint32_t last_indexes = 0;

	for (uint32_t y = 0; y < heights.size(); y++)
		for (uint32_t x = 0; x < heights[y].size(); x++)
			for (uint32_t z = 1 + needed_block(heights[y][x],
			                                   {y > 0 ? heights[y - 1][x] : heights[y][x],
			                                    x > 0 ? heights[y][x - 1] : heights[y][x],
			                                    y < heights.size() - 1 ? heights[y + 1][x] : heights[y][x],
			                                    x < heights[y].size() - 1 ? heights[y][x + 1] : heights[y][x]}); z > 0; z--) {
				for (uint32_t i = 0; i < verticesMod.size(); i++) {
					this->_vertices[last_vertices++] = {
							combineVec3(i, x + startX, y + startZ, heights[y][x] - (z - 1)),
							color.getColor(minHeight, maxHeight, heights[y][x] - (z - 1))
					};
				}

				for (unsigned int i : indicesMod) {
					//std::cout << x + y * heights[y].size() << " - " << (last_vertices - 1) / verticesMod.size() << std::endl;
					this->_indexes[last_indexes++] = (((last_vertices - 1) / verticesMod.size()) * (verticesMod.size()) + i);
				}
			}
	std::cout << "Data in the end " << last_vertices << " " << last_indexes << " " << blocks << std::endl;
}

const std::vector<Vertex> &HeightToVertexConvertor::getVertices() const {
	return _vertices;
}

const std::vector<uint32_t> &HeightToVertexConvertor::getIndexes() const {
	return _indexes;
}
