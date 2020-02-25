#pragma once
#include "Framework/GameObject.h"
class Enemy: public GameObject
{
public:
	Enemy();
	Enemy(sf::RenderWindow* win);
	~Enemy();

	//void setWindow(sf::RenderWindow* win);

	float enemySpeed;
	//functions

	void update(float dt);

private:
	sf::RenderWindow* window;
	sf::Vector2u area;
};

