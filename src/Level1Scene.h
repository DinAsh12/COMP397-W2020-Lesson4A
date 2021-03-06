#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "ship.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

private:
	// Game Objects

	glm::vec2 m_mousePosition;
	
	Ship* m_pShip;
};

#endif /* defined (__LEVEL_1_SCENE__) */

