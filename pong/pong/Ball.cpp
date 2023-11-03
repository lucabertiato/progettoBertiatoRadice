#include "Ball.h"
#include "Drawing.h"
#include "math.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>


/*
* Costruttore
*/
Ball::Ball()
{
	this->x = 0;
	this->y = 0;
	this->radius = 5;
	this->directionX = ' ';
	this->directionY = ' ';
	this->angle = 0;
}

/*
* Disegno pallina
*/
void Ball::drawBall()
{
	DrawCircle(this->x, this->y, this->radius, White, true);
}

void Ball::generateBall()
{
	srand(time(NULL));

    //left o right
	int gen = rand() % 2;

	if (gen == 0) { //left
		this->directionX = 'l';
	}
	else { //right
		this->directionX = 'r';
	}

	//up o down
	gen = rand() % 2;

	if (gen == 0) { //left
		this->directionY = 'u';
	}
	else { //right
		this->directionY = 'd';
	}

	//starting x
	if (this->directionX == 'l') {
		this->x = (Width / 2) - this->radius;
	}
	else if (this->directionX == 'r') {
		this->x = (Width / 2) + this->radius;
	}
	//starting y
	this->y = Height / 2;



	//starting angle
	
	//up left (135-180)
	if (this->directionY == 'u' && this->directionX == 'l') {
		gen = rand() % 45 + 135;
	}
	//up right (0-45)
	else if (this->directionY == 'u' && this->directionX == 'r') {
		gen = rand() + 45;
	}
	//down left (180-225)
	else if (this->directionY == 'd' && this->directionX == 'l') {
		gen = rand() % 45 + 180;
	}
	//down right (315-360)
	else if (this->directionY == 'd' && this->directionX == 'r') {
		gen = rand() % 45 + 315;
	}

	this->angle = gen;
}

void Ball::updateBallCoordinates()
{
	//up left 
	if (this->directionY == 'u' && this->directionX == 'l') {
		this->x = this->x - 1 * cos(this->angle);
		this->y = floor(this->y + 1 * sin(this->angle));
	}
	//up right 
	else if (this->directionY == 'u' && this->directionX == 'r') {
		this->x = this->x + 1 * cos(this->angle);
		this->y = this->y - 1 * sin(this->angle);
	}
	//down left 
	else if (this->directionY == 'd' && this->directionX == 'l') {
		this->x = this->x - 1 * cos(this->angle);
		this->y = ceil(this->y + 1 * sin(this->angle));
	}
	//down right 
	else if (this->directionY == 'd' && this->directionX == 'r') {
		this->x = ceil(this->x - 1 * cos(this->angle));
		this->y = ceil(this->y - 1 * sin(this->angle));
	}
}
