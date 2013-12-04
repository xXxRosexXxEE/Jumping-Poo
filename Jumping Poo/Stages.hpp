#include <SDL/SDL.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <valarray>

#include "Variables.hpp"

#ifndef _STAGES_HPP_
#define _STAGES_HPP_

	struct Stage
	{
		bool One(bool Switch);
		bool Two(bool Switch);
		bool Three(bool Switch);
	};

#endif