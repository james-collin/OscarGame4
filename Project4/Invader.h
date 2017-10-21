#pragma once
#include "Inc.h"



class Invader
{
public:
	Sprite shape;

	int HP;
	int HPMax;
	bool leftWall;
	bool rightWall;
	bool leftSide;
	int hitted;

	Invader(Texture *texture, Vector2u windowSize)
	{
		this->HPMax = rand() % 3 + 1;
		this->HP = this->HPMax;
		this->leftWall = false;
		this->rightWall = false;
		this->shape.setTexture(*texture);
		this->shape.setScale(1.5f, 1.5f);
		this->hitted = 0;

		this->shape.setPosition((windowSize.y, rand() % int(windowSize.x - this->shape.getGlobalBounds().width)), -60.f);
	}



	~Invader() {}
};