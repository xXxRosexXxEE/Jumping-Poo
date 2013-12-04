#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>

#include "Stages.hpp"

#ifndef _STAGES_CPP_
#define _STAGES_CPP_
		
		bool Stage::One(bool Switch)
		{
			Player.LeftMove(0,0,true);
			Player.RightMove(0,0,true);
			Player.Jump(0,0,true);
			SDL_BlitSurface(GameSurface::PlayerSurface, NULL, GameSurface::MainSurface, &MoveMent);
		};
#endif