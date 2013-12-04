#include <SDL2/SDL.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>


#ifndef _SDL_MANAGER_HPP
#define _SDL_MANAGER_HPP


struct SDL_Manager
{
    bool Switch(bool Switch);
    bool Setup(bool Switch);
    bool RenderFrame(bool Switch);
};
#endif
