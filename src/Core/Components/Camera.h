#ifndef ENGINE_CAMERA_H
#define ENGINE_CAMERA_H

#include "../Defines.h"

namespace Engine
{

component Camera
{
	unsigned priority;
	float fov;
	float nearDistance;
	float farDistance;
};

}

#endif //ENGINE_CAMERA_H
