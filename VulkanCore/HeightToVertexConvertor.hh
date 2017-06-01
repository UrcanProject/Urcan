//
// Created by Guillaume on 02/05/2017.
//

#ifndef VULKAN_HEIGHTTOVERTEXCONVERTOR_HH
#define VULKAN_HEIGHTTOVERTEXCONVERTOR_HH

#include <vector>
#include "Vertex.hh"

class HeightToVertexConvertor {
private:
	std::vector<Vertex> _vertices;
	std::vector<uint32_t> _indexes;

public:
	void clear();
	void feed(std::vector<std::vector<uint32_t>> const &heights, int startX, int startZ, uint32_t minHeight, uint32_t maxHeight);

public:
	const std::vector<Vertex> &getVertices() const;

	const std::vector<uint32_t> &getIndexes() const;
};


#endif //VULKAN_HEIGHTTOVERTEXCONVERTOR_HH
