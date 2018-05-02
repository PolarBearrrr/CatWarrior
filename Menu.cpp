#include "Menu.hpp"

Menu::Menu(sf::RenderWindow * window)
	:
	window(window),
	finished(false)
{
	texture.loadFromFile("menu.jpg");
	sprite.setTexture(texture);
}

void Menu::run()
{
	while (!finished && window->isOpen())
	{
		eventInput();
		draw();
		update();
	}
}

void Menu::eventInput()
{
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Return) {
				finished = true;
			}
			break;
		}

	}
}

void Menu::draw()
{
	window->clear();
	window->draw(sprite);
	window->display();
}

void Menu::update()
{
}
