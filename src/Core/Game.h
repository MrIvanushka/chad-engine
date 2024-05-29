#ifndef ENGINE_GAME_H
#define ENGINE_GAME_H

#include "Scene.h"
#include "ISceneLoader.h"
#include <chrono>

namespace Engine
{

class IRenderingSystem
{
public:
    virtual ~IRenderingSystem() = default;

    virtual void setupScreen() = 0;

    virtual void start() = 0;

    virtual void update() = 0;
};

class Game final : public ISceneLoader
{
private:
    std::vector<std::shared_ptr<Scene>> _scenes;
    unsigned _currentSceneIndex;

public:
    Game(std::vector<std::shared_ptr<Scene>> scenes) :
        _scenes(scenes), _currentSceneIndex(0)
    { }

    void loadScene(unsigned newSceneIndex) override;

    void run();

};

}

#endif //ENGINE_GAME_H
