#include"VertexArray.h"
// Constructor that generates a VAO ID
VertexArray::VertexArray()
{
	glGenVertexArrays(1, &vArray_ID);
}

// Links a VBO Attribute such as a position or color to the VAO
void VertexArray::LinkAttrib(VertexBuffer& vb, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset)
{
	vb.Bind();
	glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
	glEnableVertexAttribArray(layout);
	vb.Unbind();
}

// Binds the VAO
void VertexArray::Bind()
{
	glBindVertexArray(vArray_ID);
}

// Unbinds the VAO
void VertexArray::Unbind()
{
	glBindVertexArray(0);
}

// Deletes the VAO
void VertexArray::Delete()
{
	glDeleteVertexArrays(1, &vArray_ID);
}