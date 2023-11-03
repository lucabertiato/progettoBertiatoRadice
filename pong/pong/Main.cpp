#include "drawing.h"
#include "Field.h"
#include <iostream>
using namespace std;


void main() {

	Field field = Field();
	field.getBall().generateBall();
	field.drawField();

	//riprendere da generazione pallina
	
	while (true) {
		Wait(200);
		char key = LastKey();
		//player 1
		if (key == 'w' || key == 's') {
			field.getPlayerOne().getPaddle().setY(key);
		}
		//player 2
		else if(key == 'i'){
			field.getPlayerTwo().getPaddle().setY('w');
		}
		else if (key == 'k') {
			field.getPlayerTwo().getPaddle().setY('s');
		}
		Clear();
		field.getBall().updateBallCoordinates();
		field.drawField();
	}


}

