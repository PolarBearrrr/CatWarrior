#pragma once

#include <SFML\Graphics.hpp>
#include "Player.hpp"
#include <string>

class Player;

class Game
{
public:
	Game(sf::RenderWindow *window, int character1, int character2, int map);
	void run();
private:
	sf::RenderWindow* window;
	sf::Event event;

	sf::Texture map_texture;
	sf::Sprite map_sprite;

	Player *player1;
	Player *player2;

	bool finished;
private:
	void drawSprites();
};
