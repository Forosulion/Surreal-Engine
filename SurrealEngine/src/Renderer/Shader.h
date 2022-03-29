#pragma once
#include <string>
#include <memory>

class Shader
{


public:
	std::shared_ptr<Shader> createShader(const std::string &path);
};

