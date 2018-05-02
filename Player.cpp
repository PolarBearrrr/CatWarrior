#include "Player.hpp"

Player::Player(std::string texture_name, int x, int y, int frame_width, int frame_height)
	:
	x(x),
	y(y),
	frame_width(frame_width),
	frame_height(frame_height),
	attacking(false)
{
	if (!texture_normal.loadFromFile(texture_name + "(1).png"))
	{
		std::cout << std::endl << texture_name << " unavailable." << std::endl;
		system("pause");
		exit(0);
	}
	sprite_normal.setTexture(texture_normal);
	sprite_normal.setTextureRect(sf::IntRect(0, 0, frame_width, frame_height));
}

void Player::update(Game & game)
{
}

void Player::draw(sf::RenderWindow & window) const
{
	window.draw(sprite);
}
