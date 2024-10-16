#pragma once
#include<SDL.h>
#include<random>
#include<vector>
#include "Bullet.h"


enum class EnemieSize {
	SMALL,
	MEDIUM,
	LARGE,
};

class Enemie
{
public:
	int id,x,y;
	int horizontalMoveStack;
	bool moveLeft;
	bool moveRight;
	int random,currentExplorsionAnimationId=0;
	int currentStackFall=0;
	bool alive,isExlorsion;
	int enemieId, enemieHp;
	int enemieLostHp;
	int shotSize;
	int enemieScore;
	bool isInit = false;
	bool isDead = false;
	EnemieSize enemieSize;
	SDL_Point enemieCenterPoint;
	SDL_Texture* shotTexture;
	std::vector<Bullet>* bullets;
	SDL_Texture* enemieShape;
	SDL_Renderer* renderer;
	SDL_Rect shipRect,enemieRect;

	//Enemie(const int x,const int y, SDL_Texture* enemieShape,SDL_Renderer* renderer,SDL_Rect shipRect);
	//static bool onDamageEvent(SDL_Rect enemieRect,SDL_Rect shipRect);

	
	Enemie(int enemieId, EnemieSize enemieSize, const int x, const int y,
		SDL_Texture* enemieShape, SDL_Renderer* renderer, SDL_Rect shipRect,
		std::vector<Bullet>& bullets);
	void execute(SDL_Rect spaceShipRect, std::vector<Enemie>& enemies,
		int& shipHp, int& score);
	void init(SDL_Texture* shotTextures[]);

	bool operator==(const Enemie& other) const {
		return id == other.id;
	}

	void enemieExplorsionAnimation(std::vector<Enemie>& enemies);
	void deleteEnemie(Enemie& enemie, std::vector<Enemie>& enemies);
};