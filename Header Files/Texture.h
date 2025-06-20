#pragma once

#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#define GLM_ENABLE_EXPERIMENTAL

#include"glad.h"
#include"stb_image.h"

#include"shaderClass.h"

class Texture
{
public:
    GLuint ID;
    GLenum type;
    Texture(std::string image, GLenum texType, GLenum slot, GLenum format, GLenum pixelType);

    // Assigns a texture unit to a texture
    void texUnit(Shader& shader, const char* uniform, GLuint unit);
    // Binds a texture
    void Bind();
    // Unbinds a texture
    void Unbind();
    // Deletes a texture
    void Delete();
};
#endif
