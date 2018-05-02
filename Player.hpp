#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <cstdlib>

#include "Game.hpp"

class Player
{
public:
	Player::Player(std::string texture_name, int x, int y, int frame_width, int frame_height);

	//General
	virtual void update(Game& game);
	void draw(sf::RenderWindow& window) const;

private:
	sf::Sprite sprite;
	sf::Texture texture;

	int x, y;

	int frame_width;
	int frame_height;

};