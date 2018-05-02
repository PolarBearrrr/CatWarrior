#pragma once

#include "Player.hpp"
#include <string>

class Ben : public Player {
public:
	Ben(std::string texture_name, int x, int y, int frame_width, int frame_height);
	void update(Game& game);
};