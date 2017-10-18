#pragma once
#include "Character.h"

using namespace std;
class Orc : public Character
{
public:
	//short statsArray[7] = { hp, str, def, mgckA, mgckD, spd, lck };
	void barrelRoll() { cout << "rooooooolllllllllllinggggggg" << endl; }
	void walk() { cout << "Doopers have a really cool walk!" << endl; }
	void fly() { cout << "Dooper is flapping and flying" << endl; }
	void applyStats() { for (int i; i < 7; i++) { getStat(i); }; }
	int level;
};



class babyOrc : public Orc
{
public:
	babyOrc(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	babyOrc(short t_level);
	babyOrc();
	//void idle() { cout << "Orc jr is trotting in place like he owns the place" << std::endl; };
	short getStat(int t_arrayPos);
	void attackSkills();
	void defenseSkills();
	void magicSkills();
	void takingMagicDamage(int t_mgckDMG);
	void takingAttackDamage(int t_atkDMG);
	//void applyStats();

private:
	short statsArray[7] = { m_hp, m_str, m_def, m_mgckA, m_mgckD, m_spd, m_lck };
	int currentLevel = 1;
	
	//baseStatModifier()
};

class trooperOrc : public Orc
{
public:
	trooperOrc(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	trooperOrc(short t_level);
	trooperOrc();
	short getStat(int t_arrayPos);
	void attackSkills();
	void defenseSkills();
	void magicSkills();
	void takingMagicDamage(int t_mgckDMG);
	void takingAttackDamage(int t_atkDMG);
private:
	short statsArray[7] = { m_hp, m_str, m_def, m_mgckA, m_mgckD, m_spd, m_lck };
	int currentLevel = 1;
};

class jetpackOrc : public Orc
{
public:
	jetpackOrc(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	jetpackOrc(short t_level);
	jetpackOrc();
	short getStat(int t_arrayPos);
	void attackSkills();
	void defenseSkills();
	void magicSkills();
	void takingMagicDamage(int t_mgckDMG);
	void takingAttackDamage(int t_atkDMG);
private:
	short statsArray[7] = { m_hp, m_str, m_def, m_mgckA, m_mgckD, m_spd, m_lck };
	int currentLevel = 1;
};

class collosalOrc : public Orc
{
public:
	collosalOrc(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	collosalOrc(short t_level);
	collosalOrc();
	short getStat(int t_arrayPos);
	void attackSkills();
	void defenseSkills();
	void magicSkills();
	void takingMagicDamage(int t_mgckDMG);
	void takingAttackDamage(int t_atkDMG);
private:
	short statsArray[7] = { m_hp, m_str, m_def, m_mgckA, m_mgckD, m_spd, m_lck };
	int currentLevel = 1;
};


class playerOrc : public Orc
{
public:
	playerOrc(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	short getStat(int t_arrayPos);
	void attackSkills();
	void defenseSkills();
	void magicSkills();
	void takingMagicDamage(int t_mgckDMG);
	void takingAttackDamage(int t_atkDMG);
private:
	short statsArray[7] = { m_hp, m_str, m_def, m_mgckA, m_mgckD, m_spd, m_lck };
	int currentLevel = 1;
};
