#include "CatWarrior.hpp"

CatWarrior::CatWarrior()
	:
	window(sf::VideoMode(800,600), "Cat Warrior")
{
	window.setFramerateLimit(40);
}

void CatWarrior::run() {

	while (window.isOpen())
	{
		Menu menu(&window);
		menu.run();
		CharacterSelect character_select(&window);
		character_select.run();
	}
	window.close();
}

