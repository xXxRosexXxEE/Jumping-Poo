#include <SDL2/SDL.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>

#include "SDL_Manager.hpp"
#include "Objects.hpp"

#ifndef _SDL_MANAGER_CPP
#define _SDL_MANAGER_CPP


bool SDL_Manager::Switch(bool Switch) {

    if(Switch == true)
    {
        SDL_Init(SDL_INIT_EVERYTHING);
    };
}

bool SDL_Manager::Setup(bool Switch) {

    if(Switch == true)
    {
        MainWindow = SDL_CreateWindow("The Paint Bucket",
                                      SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                      640, 480,
                                      SDL_WINDOW_SHOWN );

        MainRenderer = SDL_CreateRenderer(MainWindow, -1, SDL_RENDERER_ACCELERATED);

        SDL_SetRenderDrawColor(MainRenderer, 10*sin(2), 0 ,0 ,255);
    };
}

bool SDL_Manager::RenderFrame(bool Switch) {

    if(Switch == true)
    {
        SDL_RenderClear(MainRenderer);

	Shape_Generator.Square(10,10,0xff0000);

        SDL_RenderPresent(MainRenderer);

    };
}


#endif
