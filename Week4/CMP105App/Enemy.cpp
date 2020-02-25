#include "Enemy.h"

Enemy::Enemy()
{
	enemySpeed = 200;
}

Enemy::Enemy(sf::RenderWindow *win)
{
	enemySpeed = 200;
	window = win;
}

Enemy::~Enemy()
{

}



void Enemy::update(float dt)
{
	area = window->getSize();

	sf::Vector2f pos = getPosition();
	move(-enemySpeed * dt, 0);

	if (pos.x <= 0) {
		enemySpeed *= -1;
	}

}

/*void Enemy::setWindow(sf::RenderWindow* win)
{
	window = win;
}*/