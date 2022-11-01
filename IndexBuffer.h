#ifndef IndexBuffer_CLASS_H
#define IndexBuffer_CLASS_H

#include<glad/glad.h>
#include<vector>

class IndexBuffer
{
public:
	GLuint iBuffer_ID;
	IndexBuffer(std::vector<GLuint>& indices);

	void Bind();
	void Unbind();
	void Delete();
};

#endif
