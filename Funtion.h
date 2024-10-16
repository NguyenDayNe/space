#pragma once
#include<SDL.h>
class Funtion
{
public:
	static int randomAB(int a, int b);
	static bool onHitEvent(SDL_Rect enemieRect, SDL_Rect shipRect);
};

