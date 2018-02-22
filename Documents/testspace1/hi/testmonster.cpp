#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "atk.h"
#include "testmonster.h"

using namespace std;

monst::monst()
{
	
}
monst::monst(string infostring)
{
	//parses out info from passed dba info
}
string monst::getName()
{
	return name;
}
void monst::setName(string newname)
{
	name= newname;
}
int monst::getAC()
{
	return ac;
}
void monst::setAC(int newac)
{
	ac= newac;
}
int monst::getHP()
{
	return hp;
}
void monst::setHP(int newhp)
{
	hp=newhp;
}
int monst::getSRG()
{
	return srg;
}
void monst::setSRG(int newsrg)
{
	srg= newsrg;
}
int monst::getDex()
{
	return dex;
}
void monst::setDex(int newdex)
{
	dex = newdex;
}
int monst::getItl()
{
	return itl;
}
void monst::setItl(int newitl)
{
	itl=newitl;
}
int monst::getWis()
{
	return wis;
}
void monst::setWis(int newwis)
{
	wis = newwis;
}
int monst::getCon()
{
	return con;
}
void monst::setCon(int newcon)
{
	con = newcon;
}
int monst::getCha()
{
	return cha;
}
void monst::setCha(int newcha)
{
	cha= newcha;
}
int monst::getAtckquant()
{
	return atckquant;
}
void monst::setAtckquant(int newquant)
{
	atckquant= newquant;
}
int monst::getSpeed()
{
	return speed;
}
void monst::setSpeed(int newspeed)
{
	
}
bool monst::getStatus()
{
	return status;
}
void monst::setStatus(bool newstat)
{
	status = newstat;
}
