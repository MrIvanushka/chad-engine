#ifndef ENGINE_RIGIDBODY_H
#define ENGINE_RIGIDBODY_H

#include "../Defines.h"
#include "glm/glm.hpp"
#include "glm/gtc/quaternion.hpp"

namespace Engine
{

component Rigidbody
{
	float mass;

	glm::vec3 position;
	glm::quat rotation;

	glm::vec3 velocity;
	glm::vec3 angularVelocity;
};

}

#endif //ENGINE_RIGIDBODY_H
