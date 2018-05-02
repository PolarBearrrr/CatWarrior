#include "Game.hpp"

Game::Game(sf::RenderWindow * window, int character1, int character2, int map)
	:
	finished(false)
{
	map_texture.loadFromFile("back" + std::to_string(map) + ".jpg");
	map_sprite.setTexture(map_texture);
}

void Game::run()
{
	while (!finished && window->isOpen()) {
		drawSprites();
	}
}

void Game::drawSprites()
{

		window->clear();
		window->draw(map_sprite);
		player1->draw(*window);
		player2->draw(*window);
		window->display();

}
