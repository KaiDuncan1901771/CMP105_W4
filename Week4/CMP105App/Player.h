#pragma once
#include "Framework/GameObject.h"
class Player: public GameObject
{
public:
	Player();
	~Player();

	float speed;

	//functions
	void handleInput(float dt);

};

