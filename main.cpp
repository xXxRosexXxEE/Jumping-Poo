/*
			Jumping Poo
			
			Just proving to myself I can make a basic platformer in C++ with SDL 1.2
			
			you can do whatever you want with this source code couldn't care one bit!
			
			Written by Rose Hughes aka Dominic Hughes
			
			EMAIL: rose@the-flower-garden.co.uk
			TWITTER: xXxRosexXxEE
			WEBSITE: http://www.the-flower-garden.co.uk/
*/

//MAIN HEADERS
#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>

//USER HEADERS
#include "Variables.hpp"
#include "Objects.hpp"
#include "SDL_Manager.hpp"
#include "SDL_Manager.cpp"
#include "Stages.hpp"
#include "Stages.cpp"
#include "Player.hpp"
#include "Player.cpp"

#undef main
int main(int argc , char *argv[])
{
	SDL_Manager.Switch(true);
	
	SDL_Manager.Setup(true);
	
	while(Running)
	{		
		if(keystate[SDLK_END]){	
				return 0;
		}
		
		while(SDL_PollEvent(&event))
		{
		   switch(event.type) {
		   
				case SDL_QUIT:
				Running = false;
				break;
				
				default:
				break;
		   }
		}  SDL_Manager.RenderFrame(true);
	}  
	 return 0;
}
