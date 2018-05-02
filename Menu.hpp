#pragma once

#include "SFML\Graphics.hpp"

class Menu
{
public:
	Menu(sf::RenderWindow *window);
	void run();
private:
	sf::RenderWindow *window;
	sf::Event event;
	sf::Sprite sprite;
	sf::Texture texture;
	bool finished;
private:
	void eventInput();
	void draw();
	void update();
};