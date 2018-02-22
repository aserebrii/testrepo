#include <iostream>
#include <cmath>
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
	//random roll between 1 and 20 + plus to hit
}

int attack::damageRoll(int damagebonus)
{
	//do the dice sim!
	//random number 1 and dicetype inclusive * dice quantity
}