#ifndef TESTMONSTER_H
#define TESTMONSTER_H
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "atk.h"
class monst{
private:
	string name;
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
	//implement status effect class
	//implement abilities class
	bool status;
	int ablquant;
	vector<attack> atks
public:	
	monst();
	monst(string infostring);
	string getName();
	void setName(string newname);
	int getHP();
	void setHP(int newhp);
	int getAC();
	void setAC(int newac);
	int getSRG();
	void setSRG(int newsrg);
	int getDex();
	void setDex(int newdex);
	int getItl();
	void setItl(int newitl);
	int getWis();
	void setWis(int newwis);
	int getCon();
	void setCon(int newcon);
	int getCha();
	void setCha(int newcha);
	int getAtckquant();
	void setAtckquant(int newquant);
	int getSpeed();
	void setSpeed(int newspeed);
	bool getStatus();
	void setStatus(bool newstat);
	int getAblQuant();
	void setAblQuant(int newquant);
	~monst();
}


#endif