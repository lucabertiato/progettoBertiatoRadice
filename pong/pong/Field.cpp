#include "Field.h"
#include "drawing.h"

/*
* Costruttore
*/
Field::Field()
{
	this->playerOne = Player();
	this->playerTwo = Player(Width-playerOne.getPaddle().getX()-playerOne.getPaddle().getWidth());
	this->ball = Ball();
}

/*
* Disegno campo da gioco
*/
void Field::drawField()
{
	//racchette
	this->playerOne.getPaddle().drawPaddle();
	this->playerTwo.getPaddle().drawPaddle();

	//palla
	this->ball.drawBall();

	//punteggio
	DrawString((Width/2) - 20, 10, std::to_string(this->playerOne.getScore()), "Times", 12, White, true);
	DrawString((Width / 2) + 20, 10, std::to_string(this->playerTwo.getScore()), "Times", 12, White, true);

	//metà campo
	for (int i = 0; i < Height; i += 20) {
		DrawLine(Width / 2, i, Width / 2, i + 10, 1, White);
	}
}

/*
* Get del primo giocatore
*/
Player& Field::getPlayerOne()
{
	return this->playerOne;
}

/*
* Get del secondo giocatore
*/
Player& Field::getPlayerTwo()
{
	return this->playerTwo;
}

/*
* Get della pallina
*/
Ball& Field::getBall()
{
	return this->ball;
}
