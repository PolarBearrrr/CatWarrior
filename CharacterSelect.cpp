#include "CharacterSelect.hpp"

CharacterSelect::CharacterSelect(sf::RenderWindow * window)
	:
	window(window),
	finished(false),
	state(1)
{
		texture1.loadFromFile("selectc.jpg");
		texture2.loadFromFile("selectc2.jpg");
		map_texture.loadFromFile("selectm.jpg");
		sprite_bg1.setTexture(texture1);
		sprite_bg2.setTexture(texture2);
		map_bg.setTexture(map_texture);
}

void CharacterSelect::run()
{
	while (!finished && window->isOpen())
	{
		eventInput();
		draw();
		update();
	}
}

void CharacterSelect::eventInput()
{
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::KeyPressed:
			processKey(event.key.code);
		}

	}
}

void CharacterSelect::draw()
{
	window->clear();
	if (state == 1) {
		window->draw(sprite_bg1);
	}
	else if (state == 2) {
		window->draw(sprite_bg2);
	}
	else {
		window->draw(map_bg);
	}
	window->display();
}

void CharacterSelect::update()
{
}

void CharacterSelect::processKey(int key_code)
{
	if (key_code == sf::Keyboard::BackSpace) {
		if (state > 1)
			state--;
	}
	else {
		int selected = -1;
		switch (key_code) {
		case sf::Keyboard::Num1: selected = 1;
		case sf::Keyboard::Num2: selected = 2;
		case sf::Keyboard::Num3: selected = 3;
		case sf::Keyboard::Num4: selected = 4;
		}
		if (selected == -1) {
			return;
		}
		if (state == 1) {
			character1 = selected;
			state++;
		}
		else if (state == 2) {
			character2 = selected;
			state++;
		}
		else {
			map = selected;
			finished = true;
		}
	}
	
}
