project(Core)

set(Components
	Components/Camera.h
	Components/Collider.h
	Components/Light.h
	Components/MeshRenderer.h
	Components/Rigidbody.h
	Components/Transform.h
)
source_group(Components FILES ${Components})

add_library(${PROJECT_NAME} STATIC
	Defines.h
	Game.cpp
	Game.h
	Scene.cpp
	Scene.h
	ISceneLoader.h
	${Components}
)

find_package(glm REQUIRED)
target_include_directories(${PROJECT_NAME} PUBLIC ${GAIA_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC glm)

target_include_directories(${PROJECT_NAME} PUBLIC ${GLM_BINARY_DIR}/include)