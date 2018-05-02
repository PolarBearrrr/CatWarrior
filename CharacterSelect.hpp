#pragma once

#include "SFML\Graphics.hpp"

class CharacterSelect
{
public:
	CharacterSelect(sf::RenderWindow *window);
	void run();
	int getCharacter1() const { return character1; }
	int getCharacter2() const { return character2; }
private:
	sf::RenderWindow *window;
	sf::Event event;
	sf::Sprite sprite_bg1, sprite_bg2, map_bg;
	sf::Texture texture1, texture2, map_texture;
	bool finished;

	int state = 1;
	int character1, character2, map;
private:
	void eventInput();
	void draw();
	void update();
	void processKey(int key_code);
};