#ifndef ENGINE_COLLIDER_H
#define ENGINE_COLLIDER_H

#include "../Defines.h"
#include "glm/glm.hpp"

namespace Engine
{

component BoxCollider
{
	bool isTrigger;
	glm::vec3 center;
	glm::vec3 halfExtents;
};

component SphereCollider
{
	bool isTrigger;
	glm::vec3 center;
	float radius;
};

component CapsuleCollider
{
	bool isTrigger;
	glm::vec3 center;
	float radius;
	float height;
};

component MeshCollider
{
	bool isTrigger;
	bool convex;
};

}

#endif //ENGINE_COLLIDER_H
