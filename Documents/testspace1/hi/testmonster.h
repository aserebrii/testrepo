#ifndef TESTMONSTER_H
#define TESTMONSTER_H
#include <string>
class monst{
private:
	int hp;
	int ac;
	int srg;//strength
	int dex;
	int itl;//intellingence
	int wis;
	int con;
	int cha;
	int atckquant;
	int speed;
	int ablquant;
	
public:
//atk might be better declared as a vector of ints
//should be structured tohit, dmg
//attacks can also be handled via a separate class
//this should allow for the utilization of multiple attacks on a monster
//consider second method first
	int atk(int dice, int dicetype,int reps,int bonus);
//implement abilities
}


#endif