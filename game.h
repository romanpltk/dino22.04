#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"
#include "map.h"
#include "cactus.h"
#include "splash.h"
#include <vector>
class Game {
public:
	enum GameState { INTRO, PLAY, GAME_OVER };
	Game();
	void play();
private:
	sf::RenderWindow window;
	GameState game_state = PLAY;
	SplashScreen game_over_screen;
	std::vector<Cactus*> cactuses;
	Player player;
	Map map1, map2;
	void update();
	void draw();
	void check_events();
	void check_collisions();
};