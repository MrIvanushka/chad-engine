#ifndef ENGINE_SCENE_H
#define ENGINE_SCENE_H

#include <vector>
#include <memory>

namespace Engine
{

class Scene
{
public:
    virtual ~Scene() = default;

    void start();
    void update();
};

}

#endif //ENGINE_SCENE_H
