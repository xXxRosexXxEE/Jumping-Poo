#include <SDL2/SDL.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>

#include "Variables.hpp"
#include "Random_Shape_Generator.hpp"

#ifndef _RANDOM_SHAPE_GENERATOR_CPP_
#define _RANDOM_SHAPE_GENERATOR_CPP_
	


void Shape_Generator::Square(int sx, int sy, int color)
{
	for(sx; sx<= 10; sx++)
	{
		for(sy; sy<= 10; sy++)
		{
			PutPixel(sx,sy,color);
		}
	}
};
#endif
