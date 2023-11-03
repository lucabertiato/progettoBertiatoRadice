#include "Player.h"

/*
* Costruttore (default per il player locale)
*/
Player::Player()
{
    this->paddle = Paddle();
    this->score = 0;
}

/*
* Costruttore (con parametri per il secondo player che avrà la racchetta dall'altra parte del campo)
*/
Player::Player(int x)
{
    this->paddle = Paddle(x);
    this->score = 0;
}

/*
* Get della racchetta
*/
Paddle& Player::getPaddle()
{
    return this->paddle;
}

/*
* Get del punteggio
*/
int Player::getScore()
{
    return this->score;
}

/*
* Incremento punteggio
*/
void Player::increaseScore()
{
    this->score++;
}
