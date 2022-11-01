#include"VertexBuffer.h"

VertexBuffer::VertexBuffer(std::vector<Vertex>& vertices)
{
	glGenBuffers(1, &vertexBuffer_ID);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer_ID);
	glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), vertices.data(), GL_STATIC_DRAW);
}

// Binds the VBO
void VertexBuffer::Bind()
{
	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer_ID);
}

// Unbinds the VBO
void VertexBuffer::Unbind()
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

// Deletes the VBO
void VertexBuffer::Delete()
{
	glDeleteBuffers(1, &vertexBuffer_ID);
}