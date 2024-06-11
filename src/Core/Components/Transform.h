#ifndef ENGINE_TRANSFORM_H
#define ENGINE_TRANSFORM_H

#include "../Defines.h"
#include "glm/glm.hpp"
#include "glm/gtc/quaternion.hpp"

namespace Engine
{

component Transform
{
	glm::vec3 localPosition;
	glm::quat localRotation;
	glm::vec3 localScale;
};

}

#endif //ENGINE_TRANSFORM_H
