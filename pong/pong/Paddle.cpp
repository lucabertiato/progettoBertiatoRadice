#include "Paddle.h"
#include "drawing.h"

/*
* Costruttore (default)
*/
Paddle::Paddle() 
{
	this->width = 10;
	this->height = 50;
	this->x = 10;
	this->y = (Height / 2) - (this->height / 2);
}

/*
* Costruttore (con parametri x e y per il secondo player)
*/
Paddle::Paddle(int x)
{
	this->width = 10;
	this->height = 50;
	this->x = x;
	this->y = (Height / 2) - (this->height / 2);
}

/*
* Disegno racchetta
*/
void Paddle::drawPaddle() {
	DrawRectangle(this->x, this->y, this->width, this->height, White, true);
}

/*
* Spostamento racchetta
*/
void Paddle::setY(char direction)
{
	if (direction == 'w') { //alto
		this->y -= 10;
	}
	else if (direction == 's') { //basso
		this->y += 10;
	}
}

/*
* Get della coordinata x
*/
int Paddle::getX()
{
	return this->x;
}

int Paddle::getWidth()
{
	return this->width;
}
