//
// Created by Guillaume on 02/05/2017.
//

#ifndef VULKAN_HEIGHTTOVERTEXCONVERTOR_HH
#define VULKAN_HEIGHTTOVERTEXCONVERTOR_HH

#include <Buffers/Vertex.hh>
#include <vector>

class HeightToVertexConvertor {
private:
	std::vector<Vertex> _vertices;
	std::vector<uint32_t> _indexes;

public:
	void clear();
	void feed(std::vector<std::vector<uint32_t>> const& heights, int startX, int startZ);

public:
	const std::vector<Vertex> &getVertices() const;

	const std::vector<uint32_t> &getIndexes() const;
};


#endif //VULKAN_HEIGHTTOVERTEXCONVERTOR_HH
