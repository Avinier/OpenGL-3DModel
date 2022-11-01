#ifndef VertexBuffer_CLASS_H
#define  VertexBuffer_CLASS_H

#include<glad/glad.h>
#include<vector>
#include<glm/glm.hpp>

struct Vertex
{
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 color;
	glm::vec2 texUV;
};

class VertexBuffer
{
public:
	GLuint vertexBuffer_ID;
	VertexBuffer(std::vector<Vertex>& vertices);

	void Bind();
	void Unbind();
	void Delete();
};

#endif
