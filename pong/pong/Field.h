#pragma once
#include "Ball.h";
#include "Player.h";

class Field
{
private:
	Player playerOne;
	Player playerTwo;
	Ball ball;

public:
	Field();
	void drawField();
	Player& getPlayerOne();
	Player& getPlayerTwo();
	Ball& getBall();
};

