#pragma once
#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "LootTable.h"
using namespace std;
class Character
{
private:
	
public:
	short m_hp = 5, m_str = 1, m_def = 1, m_mgckA = 1, m_mgckD = 1, m_spd = 1, m_lck = 1; // Each stat in order is 
	
	//health points (if this hits 0, you're dead)
	//strenth (how hard you hit the thing)
	//defense (proctection against things hitting you)
	//magic Attack(how hard your 'not pysical' attacks hit
	//magic defense(protection against the non-pysical attacks)
	//Speed (the higher the value, the sooner in the turn order you will be)
	//Luck (higher the value, better odds at getting crits/better loot)

	short statsArray[7] = { m_hp, m_str, m_def, m_mgckA, m_mgckD, m_spd, m_lck };
	int currentLevel = 1; //this acts as a multiplier to the base stats.
	lootTable lootMenu;

	void setLevel(int t_level) { currentLevel = t_level; }
	virtual void attackSkills() = 0;
	virtual void defenseSkills() = 0;
	virtual void magicSkills() = 0;
	virtual void takingMagicDamage(int t_mgckDMG) = 0;
	virtual void takingAttackDamage(int t_atkDMG) = 0;
	//virtual void idle() = 0;
	virtual void fly() = 0; //pure virtual function
	virtual void setStat(int t_arrayPos, int t_newStat) { statsArray[t_arrayPos] = t_newStat; }
	virtual short getStat(int t_arrayPos) { return statsArray[t_arrayPos]; }
	short getLoot(int t_row, int t_col) { return lootMenu.Loot[t_col][t_row]; }

	virtual void baseStatModifier(int t_level,short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck) 
	{ m_hp = (m_hp * t_hp) * t_level, m_str = (m_str * t_str)  * t_level, m_def = (m_def * t_def)  * t_level, m_mgckA = (m_mgckA * t_mgckA) * t_level, 
		m_mgckD = (m_mgckD * t_mgckD)  * t_level, m_spd = (m_spd * t_spd)  * t_level, m_lck = (m_lck * t_lck)  * t_level; }			//each sub species will have its own modifiers to these stats.

};