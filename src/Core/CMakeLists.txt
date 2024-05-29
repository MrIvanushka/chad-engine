project(Core)

add_library(${PROJECT_NAME} STATIC
	Game.cpp
	Game.h
	Scene.cpp
	Scene.h
	ISceneLoader.h
)
