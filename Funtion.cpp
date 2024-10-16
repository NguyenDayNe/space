#include "Funtion.h"
#include<cstdlib>

int Funtion::randomAB(int a, int b) {
	return a + rand() % (b - a + 1);
}
bool Funtion::onHitEvent(SDL_Rect enemieRect, SDL_Rect shipRect) {
	if (
		shipRect.x + shipRect.w<enemieRect.x ||
		shipRect.x> enemieRect.x + enemieRect.w ||
		shipRect.y + shipRect.h<enemieRect.y ||
		shipRect.y>enemieRect.y + enemieRect.h)
		return false;
	return true;
}