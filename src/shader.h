#ifndef SHADER_H
#define SHADER_H

#include "glm/glm.hpp"
#include <glad/glad.h>
#include <string>

class Shader {
public:
  unsigned int ID;

  Shader(const char* vertexPath, const char* fragmentPath);
  void use();
  void setBool(const std::string& name, bool value) const;
  void setInt(const std::string& name, int value) const;
  void setFloat(const std::string& name, float value) const;
  void setVec3(const std::string& name, float x, float y, float z) const;
  void setMat4(const std::string& name, glm::mat4 mat);
  void checkShaderCompilation(unsigned int& id);
  void checkShaderLinking(unsigned int& id);
};

#endif // !SHADER_H
