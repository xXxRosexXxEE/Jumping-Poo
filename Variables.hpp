#include <SDL2/SDL.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>

#ifndef _VARIABLES_HPP
#define _VARIABLES_HPP

SDL_Surface *TS, *MainMenu , *StartMenu, *ShapeGeneratorSurface;

SDL_Event event;

bool
Running = true;

SDL_Renderer *MainRenderer = NULL;

SDL_Window *MainWindow = NULL;

#endif
