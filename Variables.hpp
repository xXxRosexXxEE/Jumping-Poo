#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>


#ifndef _VARIABLES_HPP_
#define _VARIABLES_HPP_

bool
Running = true;

SDL_Event event;

int
move_value_x=0,
move_value_y=0,
move_value_w=0,
move_value_h=0;


Uint8 *keystate = SDL_GetKeyState(NULL);

namespace S1_TileRect
{
SDL_Rect
RightSquare,
LeftSquare,
MiddleSquare;
}

SDL_Rect MoveMent;

SDL_Surface *Poo;

namespace GameSurface
{
SDL_Surface
*PlayerSurface,
*MainSurface,
*TitleScreenBG,
*LevelOneBG,
*LevelTwoBG,
*LevelThreeBG,
*LevelFourBG;
};

namespace Player_Movement_Switch
{
bool
Up = false,
Down = false,
Jump = false,
Stand = true,
Left = false,
Right = false;
};

#endif
