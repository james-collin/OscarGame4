#pragma once
#include "Inc.h"
class Bullet
{
public:
	Sprite shape;
	bool leftWall;
	bool rightWall;
	bool leftSide;

	Bullet(Texture *texture, Vector2f pos)
	{
		this->leftWall = false;

		this->rightWall = false;

		this->leftSide = false;

		this->shape.setTexture(*texture);

		this->shape.setScale(2.f, 2.f);

		this->shape.setPosition(pos);
	}
	~Bullet() {}
};