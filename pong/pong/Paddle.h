#pragma once

class Paddle
{
private:
	int x;
	int y;
	int width;
	int height;
public:
	Paddle();
	Paddle(int x);
	void drawPaddle();
	void setY(char direction);
	int getX();
	int getWidth();
};

