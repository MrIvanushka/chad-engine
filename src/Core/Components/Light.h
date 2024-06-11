#ifndef ENGINE_LIGHT_H
#define ENGINE_LIGHT_H

#include "../Defines.h"
#include "glm/glm.hpp"

namespace Engine
{

component DirectionalLight
{
	glm::vec3 direction;
	glm::vec4 color;
};

component PointLight
{
	float intensity;
	float range;
	glm::vec4 color;
};

component SpotLight
{
	float intensity;
	float range;
	float angle;
	glm::vec3 direction;
	glm::vec4 color;
};

}

#endif //ENGINE_LIGHT_H
