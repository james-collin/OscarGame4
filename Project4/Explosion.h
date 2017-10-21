#pragma once
#include "Inc.h"

class Explosion
{
public:
	Sprite shape;
	int time;

	Explosion(Texture *texture)
	{
		this->time = 0;
		this->shape.setTexture(*texture);
		this->shape.setScale(1.5f, 1.5f);



	}
};
