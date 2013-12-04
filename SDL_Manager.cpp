#include <SDL/SDL.h>	
#include <SDL/SDL_image.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>


#include "Variables.hpp"

#ifndef _SDL_MANAGER_CPP_
#define _SDL_MANAGER_CPP_

bool SDL_Manager::Switch(bool Switch)
{
	if(Switch == true)
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		SDL_WM_SetCaption("Jumping Poo 1.0 "," JP");
	};
}

bool SDL_Manager::Setup(bool Switch)
{
	if(Switch == true)
	{
		GameSurface::MainSurface = SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);
		GameSurface::PlayerSurface = IMG_Load("poo.png");
		GameSurface::TitleScreenBG = IMG_Load("tsbg.png");
	}
}

 bool SDL_Manager::RenderFrame(bool Switch)
{
	if(Switch == true)
	{
		SDL_FillRect(GameSurface::MainSurface, NULL , 0xFFFFFF);
		
		SDL_BlitSurface(GameSurface::TitleScreenBG,NULL,GameSurface::MainSurface,NULL);
		
		Stage.One(true);
		
		SDL_Flip(GameSurface::MainSurface);
	}
}

#endif


