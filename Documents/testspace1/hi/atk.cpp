#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include "atk.h"

using namespace std;

attack::attack()
{
	range = 0;
	damagemin = 1;
	dicetype = 4;
	dicequant = 1;
}

attack::attack(int rng,dmgmin,dctype,dcquant)
{
	range = rng;
	damagemin = dmgmin;
	dicetype = dctype;
	dicequant = dcquant;
}

int attack::getRange()
{
	return range;
}
void attack::setRange(int rng)
{
	range=rng;
}

int attack::getDmgMin()
{
	return damagemin;
}
void attack::setDmgMin(int dmgmin)
{
	damagemin=dmgmin;
}

int attack::getDiceType()
{
	return dicetype;
}
void attack::setDiceType(int numofsides)
{
	dicetype= numofsides;
}

int attack::getDiceQuant()
{
	return dicequant;
}
void attack::setDiceQuant(int numofdice)
{
	dicequant=numofdice;
}

int attack::tohit(int plustohit)
{
	srand(time(NULL));
	return (rand()%21+1)+plustohit;
}

int attack::damageRoll(int damagebonus)
{
	//do the dice sim!
	//random number 1 and dicetype inclusive * dice quantity
	int sum=0;
	for(int i =0;i<dicequant;i++)
	{
		srand(time(NULL));
		sum+=rand()%dicetype+1
	}
}