#pragma once

#include "Shader.h"

class Sprite
{
public:
    Sprite();
    ~Sprite();
    void draw();
private:
    Shader* shader;
    unsigned int VAO;
};
