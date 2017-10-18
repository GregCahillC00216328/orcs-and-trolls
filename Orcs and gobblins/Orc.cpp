#include "Orc.h"

trooperOrc::trooperOrc(short t_level,					//Contructor is both stats and level are custom
	short t_hp, 
	short t_str, 
	short t_def, 
	short t_mgckA, 
	short t_mgckD,
	short t_spd, 
	short t_lck)
{
	trooperOrc::m_hp = (t_hp * t_level) * 1.5;
	trooperOrc::m_str = (t_str * t_level) * 2;
	trooperOrc::m_def = (t_def * t_level) * 1.5;
	trooperOrc::m_mgckA = t_mgckA * t_level;
	trooperOrc::m_mgckD = t_mgckD * t_level;
	trooperOrc::m_spd = t_spd * t_level;
	trooperOrc::m_lck = t_spd * t_level;
}

trooperOrc::trooperOrc(short t_level)				//Constructor if only level is the only custom value
{
	trooperOrc::m_hp = (m_hp * t_level) * 1.5;
	trooperOrc::m_str = (m_str * t_level) * 2;
	trooperOrc::m_def = (m_def* t_level) * 1.5;
	trooperOrc::m_mgckA = m_mgckA * t_level;
	trooperOrc::m_mgckD = m_mgckD * t_level;
	trooperOrc::m_spd = m_spd * t_level;
	trooperOrc::m_lck = m_lck * t_level;
}

trooperOrc::trooperOrc()							//Default constructor, assumes level is players current level
{
	trooperOrc::m_hp = m_hp * 1.5;
	trooperOrc::m_str = m_str * 2;
	trooperOrc::m_def = m_def * 1.5;
	trooperOrc::m_mgckA = m_mgckA;
	trooperOrc::m_mgckD = m_mgckD;
	trooperOrc::m_spd = m_spd;
	trooperOrc::m_lck = m_lck;
}

short trooperOrc::getStat(int t_arrayPos)
{
	return 0;
}

void trooperOrc::attackSkills()
{
}

void trooperOrc::defenseSkills()
{
}

void trooperOrc::magicSkills()
{
}

babyOrc::babyOrc(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	babyOrc::m_hp = t_hp * t_level;
	babyOrc::m_str = t_str * t_level;
	babyOrc::m_def = t_def * t_level;
	babyOrc::m_mgckA = t_mgckA * t_level;
	babyOrc::m_mgckD = t_mgckD * t_level;
	babyOrc::m_spd = t_spd * t_level;
	babyOrc::m_lck = t_spd * t_level;
}

babyOrc::babyOrc(short t_level)
{
	babyOrc::m_hp = m_hp * t_level;
	babyOrc::m_str = m_str * t_level;
	babyOrc::m_def = m_def* t_level;
	babyOrc::m_mgckA = m_mgckA * t_level;
	babyOrc::m_mgckD = m_mgckD * t_level;
	babyOrc::m_spd = m_spd * t_level;
	babyOrc::m_lck = m_lck * t_level;
}

babyOrc::babyOrc()
{
	babyOrc::m_hp = m_hp;
	babyOrc::m_str = m_str;
	babyOrc::m_def = m_def;
	babyOrc::m_mgckA = m_mgckA;
	babyOrc::m_mgckD = m_mgckD;
	babyOrc::m_spd = m_spd;
	babyOrc::m_lck = m_lck;
}

short babyOrc::getStat(int t_arrayPos)
{
	return 0;
}

void babyOrc::attackSkills()
{
}

void babyOrc::defenseSkills()
{
}

void babyOrc::magicSkills()
{
}



jetpackOrc::jetpackOrc(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	jetpackOrc::m_hp = t_hp * t_level;
	jetpackOrc::m_str = (t_str * t_level) * 1.3;
	jetpackOrc::m_def = t_def * t_level;
	jetpackOrc::m_mgckA = t_mgckA * t_level;
	jetpackOrc::m_mgckD = t_mgckD * t_level;
	jetpackOrc::m_spd = (t_spd * t_level) * 2;
	jetpackOrc::m_lck = t_spd * t_level;
}

jetpackOrc::jetpackOrc(short t_level)
{
	jetpackOrc::m_hp = m_hp * t_level;
	jetpackOrc::m_str =(m_str * t_level) * 1.3;
	jetpackOrc::m_def = m_def* t_level;
	jetpackOrc::m_mgckA = m_mgckA * t_level;
	jetpackOrc::m_mgckD = m_mgckD * t_level;
	jetpackOrc::m_spd = (m_spd * t_level) * 2;
	jetpackOrc::m_lck = m_lck * t_level;
}

jetpackOrc::jetpackOrc()
{
	jetpackOrc::m_hp = m_hp;
	jetpackOrc::m_str = m_str * 1.3;
	jetpackOrc::m_def = m_def;
	jetpackOrc::m_mgckA = m_mgckA;
	jetpackOrc::m_mgckD = m_mgckD;
	jetpackOrc::m_spd = m_spd * 2;
	jetpackOrc::m_lck = m_lck;
}

short jetpackOrc::getStat(int t_arrayPos)
{
	return 0;
}

void jetpackOrc::attackSkills()
{
}

void jetpackOrc::defenseSkills()
{
}

void jetpackOrc::magicSkills()
{
}

collosalOrc::collosalOrc(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	collosalOrc::m_hp = (t_hp * t_level) * 3;
	collosalOrc::m_str = (t_str * t_level) * 3;
	collosalOrc::m_def = (t_def * t_level) * 2;
	collosalOrc::m_mgckA = (t_mgckA * t_level) * .5;
	collosalOrc::m_mgckD = (t_mgckD * t_level) * .25;
	collosalOrc::m_spd = (t_spd * t_level) * .5;
	collosalOrc::m_lck = t_spd * t_level;
}

collosalOrc::collosalOrc(short t_level)
{
	collosalOrc::m_hp = (m_hp * t_level) * 3;
	collosalOrc::m_str = (m_str * t_level) * 3;
	collosalOrc::m_def = (m_def * t_level) * 2;
	collosalOrc::m_mgckA = (m_mgckA * t_level) * .5;
	collosalOrc::m_mgckD = (m_mgckD * t_level) * .25;
	collosalOrc::m_spd = (m_spd * t_level) * .5;
	collosalOrc::m_lck = m_lck * t_level;
}

collosalOrc::collosalOrc()
{
	collosalOrc::m_hp = m_hp * 3;
	collosalOrc::m_str = m_str * 3;
	collosalOrc::m_def = m_def * 2;
	collosalOrc::m_mgckA = m_mgckA * .5;
	collosalOrc::m_mgckD = m_mgckD * .25;
	collosalOrc::m_spd = m_spd * .5;
	collosalOrc::m_lck = m_lck;
}

short collosalOrc::getStat(int t_arrayPos)
{
	return 0;
}

void collosalOrc::attackSkills()
{
}

void collosalOrc::defenseSkills()
{
}

void collosalOrc::magicSkills()
{
}

playerOrc::playerOrc(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	playerOrc::m_hp = t_hp * t_level;
	playerOrc::m_str = t_str * t_level;
	playerOrc::m_def = t_def * t_level;
	playerOrc::m_mgckA = t_mgckA * t_level;
	playerOrc::m_mgckD = t_mgckD * t_level;
	playerOrc::m_spd = t_spd * t_level;
	playerOrc::m_lck = t_spd * t_level;
}

short playerOrc::getStat(int t_arrayPos)
{
	return 0;
}

void playerOrc::attackSkills()
{
}

void playerOrc::defenseSkills()
{
}

void playerOrc::magicSkills()
{
}

