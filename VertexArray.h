#ifndef VertexArray_CLASS_H
#define VertexArray_CLASS_H

#include<glad/glad.h>
#include"VertexBuffer.h"

class VertexArray
{
public:
	GLuint vArray_ID;
	VertexArray();

	void LinkAttrib(VertexBuffer& vb, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset);
	void Bind();
	void Unbind();
	void Delete();
};

#endif