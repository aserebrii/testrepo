#ifndef ATK_H
#define ATK_H

class attack
{
private:
	int range;
	int damagemin;
	int dicetype;
	int dicequant;
public:
	attack();
	attack(int rng,dmgmin,dctype,dcquant);
	int getRange();
	void setRange(int rng);
	int getDmgMin();
	void setDmgMin(int dmgmin);
	int getDiceType();
	void setDiceType(int numofsides);
	int getDiceQuant();
	void setDiceQuant(int numofdice);
	int tohit(int plustohit);
	int damageRoll(int damagebonus);
	~attack();
}
#endif