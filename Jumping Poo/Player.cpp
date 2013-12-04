#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>

#include "Variables.hpp"

#ifndef _PLAYER_CPP_
#define _PLAYER_CPP_


bool Player::Spawn(int x, int y, bool Switch)
{
	if(keystate[SDLK_RIGHT])
	{
		MoveMent.x += 5;
	}
	
	if(!keystate[SDLK_RIGHT])
	{
		MoveMent.x += 0;
	}
	
	if(keystate[SDLK_LEFT])
	{
		MoveMent.x -= 5;
	}
	
	if(!keystate[SDLK_LEFT])
	{
		MoveMent.x -= 0;
	}
	if(keystate[SDLK_SPACE])
	{
		MoveMent.y += 1;
	}
	
	if(!keystate[SDLK_SPACE])
	{
		MoveMent.y += 0;
	}
};

#endif