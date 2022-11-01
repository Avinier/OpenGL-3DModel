#ifndef Shader_CLASS_H
#define Shader_CLASS_H

#include<glad/glad.h>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<cerrno>

std::string get_file_contents(const char* filename);

class Shader
{
public:
	GLuint shader_ID;
	Shader(const char* vertexFile, const char* fragmentFile);

	void Bind();
	void Unbind();
private:
	void compileErrors(unsigned int shader, const char* type);
};


#endif
