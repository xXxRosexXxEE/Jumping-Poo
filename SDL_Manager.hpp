#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>


#ifndef _SDL_MANAGER_HPP_
#define _SDL_MANAGER_HPP_
	
 struct SDL_Manager
 {
	bool Switch(bool Switch);
	bool Setup(bool Switch);
	bool RenderFrame(bool Switch);
 };

#endif



