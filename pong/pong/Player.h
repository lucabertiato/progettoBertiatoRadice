#pragma once
#include "Paddle.h"
class Player
{
private:
	Paddle paddle;
	int score;
public:
	Player();
	Player(int x);
	Paddle& getPaddle();
	int getScore();
	void increaseScore();
};

