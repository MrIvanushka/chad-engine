#ifndef ENGINE_SCENE_H
#define ENGINE_SCENE_H

#include <vector>
#include <memory>
#include "gaia.h"

namespace Engine
{

class Scene
{
private:
    gaia::ecs::World _world;

    gaia::ecs::SystemManager _renderingSimulation;
    gaia::ecs::SystemManager _logicSimulation;
public:
    virtual ~Scene() = default;

    void start();
    void update();
};

}

#endif //ENGINE_SCENE_H
