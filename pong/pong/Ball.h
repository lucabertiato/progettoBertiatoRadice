#pragma once
class Ball
{
private:
	int x;
	int y;
	int radius;
	char directionX;
	char directionY;
	int angle;
public:
	Ball();
	void drawBall();
	void generateBall();
	void updateBallCoordinates();
};