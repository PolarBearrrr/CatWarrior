#pragma once

#include "SFML\Graphics.hpp"
#include "Menu.hpp"
#include "CharacterSelect.hpp"

class CatWarrior
{
public:
	CatWarrior();
	void run();
private:
	sf::RenderWindow window;
};
