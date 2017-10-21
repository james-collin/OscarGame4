#pragma once
#include "Inc.h"
class TheShip
{
public:
	Sprite shape;
	Texture *texture;

	int HP;
	int HPMax;

	std::vector<Bullet> bullets;
	std::vector<Bullet> bulletsLeft;
	std::vector<Bullet> bulletsRight;

	TheShip(Texture *texture)
	{
		this->HPMax = 100;
		this->HP = this->HPMax;

		this->texture = texture;
		this->shape.setTexture(*texture);

		this->shape.setScale(2.f, 2.f);

	}

	~TheShip() {}


};