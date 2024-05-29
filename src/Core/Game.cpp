#include "Game.h"

using namespace Engine;

void Game::loadScene(unsigned newSceneIndex)
{
    _currentSceneIndex = newSceneIndex;
    _scenes[_currentSceneIndex]->start();
}

void Game::run()
{
    loadScene(0);

    std::chrono::high_resolution_clock clock;
    float timeSinceLastPhysicsUpdate = 0;
    const float PHYSICS_UPDATE_RATE = 1 / 60;

    auto previousFrameTime = clock.now();

    while (true)
    {
        auto currentFrameTime = clock.now();
        auto deltaTimeRaw = std::chrono::duration_cast<std::chrono::microseconds>(currentFrameTime - previousFrameTime).count();
        float deltaTime = deltaTimeRaw / 1000000.;

        _scenes[_currentSceneIndex]->update();

        previousFrameTime = currentFrameTime;
    }
}

