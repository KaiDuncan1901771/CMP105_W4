#include "Player.h"
Player::Player()
{
	speed = 200;
}

Player::~Player()
{

}

void Player::handleInput(float dt) 
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		move(speed * dt, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		move(-speed * dt, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0, -speed * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0, speed * dt);
	}
}