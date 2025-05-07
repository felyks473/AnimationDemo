#pragma once

#include <cstdint>
#include <glm/glm.hpp>
#include <string>

class Shader
{
public:
    Shader();
    ~Shader();
        
    void Use();
    void Init(const char* vertexPath, const char* fragmentPath);
    void setMat4(const std::string &name, const glm::mat4 &mat) const;
private:
    std::uint32_t shaderID;
};
