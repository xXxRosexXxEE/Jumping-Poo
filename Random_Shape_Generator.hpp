#include <SDL2/SDL.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>

#include "Variables.hpp"

#ifndef _RANDOM_SHAPE_GENERATOR_HPP_
#define _RANDOM_SHAPE_GENERATOR_HPP_
	
void PutPixel(int x, int y , int color)
{
	Uint8* Pixels = (Uint8*) (ShapeGeneratorSurface->pixels);
	Uint8 Offset = y * (ShapeGeneratorSurface->pitch/sizeof(Uint8));
	Pixels[Offset+x] = color;
}

struct Shape_Generator
{

	void Square(int sx, int sy, int color);		
	void Circle(int sx, int sy, int color);
	void Triangle(int sx, int sy, int color);
	void Star(int sx, int sy, int color);
};
#endif
