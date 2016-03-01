#include "tetriminos.h"

using namespace sf;

void Tetrimino::rotateLeft()
{
	this->rotation--;
	if( this->rotation < 0)
		this->rotation = 3;
}

void Tetrimino::rotateRight()
{
	this->rotation++;
	if( this->rotation > 3 )
		this->rotation = 0;
}

int Tetrimino::getFarLeft() const
{
	int i;
	for(i = 0; i < 4; i++)
	{
		if( this->array[rotation][i] == 1 )
			break;	
	}
	return i;
}

int Tetrimino::getFarRight() const
{
	return 0;
}

int Tetrimino::getFarDown() const
{
	return 0;
}

Block Tetrimino::getBlock() const
{
	return this->block;
}

void Tetrimino::getArray(int *arr) const
{
	for(int i=0; i<16; i++)
		arr[i] = this->array[this->rotation][i];
}
