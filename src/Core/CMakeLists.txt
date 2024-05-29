project(Core)

add_library(${PROJECT_NAME} STATIC
	Game.cpp
	Game.h
	Scene.cpp
	Scene.h
	ISceneLoader.h
)

target_include_directories(${PROJECT_NAME} PUBLIC ${GAIA_DIR})