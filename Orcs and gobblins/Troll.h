#pragma once
#include "Character.h"

using namespace std;
class Troll : public Character 
{
public:
	void fly() { cout << "Average Dooper is flapping and flying" << endl; }
	//short statsArray[7] = { hp, str, def, mgckA, mgckD, spd, lck };
};

class babyTroll : public Troll
{
public:
	babyTroll(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	babyTroll(short t_level);
	babyTroll();
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

class soldierTroll : public Troll
{
public:
	soldierTroll(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	soldierTroll(short t_level);
	soldierTroll();
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

class mageTroll : public Troll
{
public:
	mageTroll(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	mageTroll(short t_level);
	mageTroll();
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


class alchemistTroll : public Troll
{
public:
	alchemistTroll(short t_level,
		short t_hp,
		short t_str,
		short t_def,
		short t_mgckA,
		short t_mgckD,
		short t_spd,
		short t_lck);
	alchemistTroll(short t_level);
	alchemistTroll();
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

class playerTroll : public Troll
{
public:
	playerTroll(short t_level,
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