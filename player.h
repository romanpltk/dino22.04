#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float speed = 0.f;
	bool isJump = false;
	int hp = PLAYER_HP;
public:
	Player();
	void update();
	void draw(sf::RenderWindow& window);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	void decreaseHp(size_t);
	int getHP();
};