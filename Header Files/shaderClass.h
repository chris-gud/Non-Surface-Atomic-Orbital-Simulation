#pragma once

#ifndef SHADER_CLASS_H
#define SHADER_CLASS_H

#include"glad.h"
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<cerrno>
#include <stdexcept>  // For runtime_error

std::string get_file_contents(const char* filename);

class Shader
{
public:
    // Reference ID of the Shader Program
    GLuint ID;
    // Constructor that build the Shader Program from 2 different shaders
    Shader(std::string vertexFile, std::string fragmentFile);

    // Activates the Shader Program
    void Activate();
    // Deletes the Shader Program
    void Delete();
private:
    // Checks if the different Shaders have compiled properly
    void compileErrors(unsigned int shader, const char* type);
};


#endif
