#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

struct Player
{
    bool RightMove(int x, int y, bool Switch);
    bool Life(float amount , bool alive , bool Switch);
    bool LeftMove(int x, int y , bool Switch);
    bool Jump(int x, int y , bool Switch);
};

#endif