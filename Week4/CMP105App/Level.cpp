#include "Level.h"


Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	textureEnemy.loadFromFile("gfx/goomba.png");
	textureBackground.loadFromFile("gfx/Level1_1.png");

	player.setTexture(&texture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 200);
	player.setInput(input);

	background.setTexture(&textureBackground);
	background.setSize(sf::Vector2f(11038, 675));

	enemy.setTexture(&textureEnemy);
	enemy.setSize(sf::Vector2f(100, 100));
	enemy.setPosition(500, 200);
	enemy.setInput(input);
	
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
}

// Update game objects
void Level::update(float dt)
{
	player.handleInput(dt);
	enemy.update(dt);

}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->draw(player);
	window->draw(enemy);
	
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}