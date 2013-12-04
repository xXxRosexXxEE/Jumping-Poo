/*
		The Paint Bucket

		Coded by xXxRosexXxEE

		Designed by Rose Hughes
*/

//main headers
#include <SDL2/SDL.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>

//user defined headers
#include "Variables.hpp"
#include "Objects.hpp"
#include "SDL_Manager.hpp"
#include "SDL_Manager.cpp"
#include "Random_Shape_Generator.hpp"
#include "Random_Shape_Generator.cpp"
//#include "TPB_Color_Picker.hpp"

int main(int argc, char *argv[])
{
    SDL_Manager.Switch(true);

    SDL_Manager.Setup(true);

    while(Running == true)
    {
        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
            case SDL_QUIT:
                Running = false;
                return 0;
                break;
            }
        }

        SDL_Manager.RenderFrame(true);

    }

    return 0;
};
