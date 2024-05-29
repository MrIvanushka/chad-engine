#include "Scene.h"

using namespace Engine;

void Scene::update()
{
	_logicSimulation.update();
	_renderingSimulation.update();
}