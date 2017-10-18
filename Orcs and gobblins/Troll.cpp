#include "Troll.h"

babyTroll::babyTroll(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	babyTroll::statsArray[0] = t_hp * t_level;
	babyTroll::statsArray[1] = t_str * t_level;
	babyTroll::statsArray[2] = t_def * t_level;
	babyTroll::statsArray[3] = t_mgckA * t_level;
	babyTroll::statsArray[4] = t_mgckD * t_level;
	babyTroll::statsArray[5] = t_spd * t_level;
	babyTroll::statsArray[6] = t_spd * t_level;
}

babyTroll::babyTroll(short t_level)
{
	babyTroll::statsArray[0] = m_hp * t_level;
	babyTroll::statsArray[1] = m_str * t_level;
	babyTroll::statsArray[2] = m_def* t_level;
	babyTroll::statsArray[3] = m_mgckA * t_level;
	babyTroll::statsArray[4] = m_mgckD * t_level;
	babyTroll::statsArray[5] = m_spd * t_level;
	babyTroll::statsArray[6] = m_lck * t_level;
}

babyTroll::babyTroll()
{
	babyTroll::statsArray[0] = m_hp;
	babyTroll::statsArray[1] = m_str;
	babyTroll::statsArray[2] = m_def;
	babyTroll::statsArray[3] = m_mgckA;
	babyTroll::statsArray[4] = m_mgckD;
	babyTroll::statsArray[5] = m_spd;
	babyTroll::statsArray[6] = m_lck;
}

short babyTroll::getStat(int t_arrayPos)
{
	return statsArray[t_arrayPos];
}

void babyTroll::attackSkills()
{
}

void babyTroll::defenseSkills()
{
}

void babyTroll::magicSkills()
{
}

soldierTroll::soldierTroll(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	soldierTroll::statsArray[0] = t_hp * t_level;
	soldierTroll::statsArray[1] = t_str * t_level;
	soldierTroll::statsArray[2] = t_def * t_level;
	soldierTroll::statsArray[3] = t_mgckA * t_level;
	soldierTroll::statsArray[4] = t_mgckD * t_level;
	soldierTroll::statsArray[5] = t_spd * t_level;
	soldierTroll::statsArray[6] = t_spd * t_level;
}

soldierTroll::soldierTroll(short t_level)
{
	soldierTroll::statsArray[0] = m_hp * t_level;
	soldierTroll::statsArray[1] = m_str * t_level;
	soldierTroll::statsArray[2] = m_def* t_level;
	soldierTroll::statsArray[3] = m_mgckA * t_level;
	soldierTroll::statsArray[4] = m_mgckD * t_level;
	soldierTroll::statsArray[5] = m_spd * t_level;
	soldierTroll::statsArray[6] = m_lck * t_level;
}

soldierTroll::soldierTroll()
{
	soldierTroll::statsArray[0] = m_hp;
	soldierTroll::statsArray[1] = m_str;
	soldierTroll::statsArray[2] = m_def;
	soldierTroll::statsArray[3] = m_mgckA;
	soldierTroll::statsArray[4] = m_mgckD;
	soldierTroll::statsArray[5] = m_spd;
	soldierTroll::statsArray[6] = m_lck;
}

short soldierTroll::getStat(int t_arrayPos)
{
	return statsArray[t_arrayPos];
}

void soldierTroll::attackSkills()
{
}

void soldierTroll::defenseSkills()
{
}

void soldierTroll::magicSkills()
{
}

mageTroll::mageTroll(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	mageTroll::statsArray[0] = t_hp * t_level;
	mageTroll::statsArray[1] = t_str * t_level;
	mageTroll::statsArray[2] = t_def * t_level;
	mageTroll::statsArray[3] = t_mgckA * t_level;
	mageTroll::statsArray[4] = t_mgckD * t_level;
	mageTroll::statsArray[5] = t_spd * t_level;
	mageTroll::statsArray[6] = t_spd * t_level;
}

mageTroll::mageTroll(short t_level)
{
	mageTroll::statsArray[0] = m_hp * t_level;
	mageTroll::statsArray[1] = m_str * t_level;
	mageTroll::statsArray[2] = m_def* t_level;
	mageTroll::statsArray[3] = m_mgckA * t_level;
	mageTroll::statsArray[4] = m_mgckD * t_level;
	mageTroll::statsArray[5] = m_spd * t_level;
	mageTroll::statsArray[6] = m_lck * t_level;
}

mageTroll::mageTroll()
{
	mageTroll::statsArray[0] = m_hp;
	mageTroll::statsArray[1] = m_str;
	mageTroll::statsArray[2] = m_def;
	mageTroll::statsArray[3] = m_mgckA;
	mageTroll::statsArray[4] = m_mgckD;
	mageTroll::statsArray[5] = m_spd;
	mageTroll::statsArray[6] = m_lck;
}

short mageTroll::getStat(int t_arrayPos)
{
	return statsArray[t_arrayPos];
}

void mageTroll::attackSkills()
{
}

void mageTroll::defenseSkills()
{
}

void mageTroll::magicSkills()
{
}

alchemistTroll::alchemistTroll(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	alchemistTroll::statsArray[0] = t_hp * t_level;
	alchemistTroll::statsArray[1] = t_str * t_level;
	alchemistTroll::statsArray[2] = t_def * t_level;
	alchemistTroll::statsArray[3] = t_mgckA * t_level;
	alchemistTroll::statsArray[4] = t_mgckD * t_level;
	alchemistTroll::statsArray[5] = t_spd * t_level;
	alchemistTroll::statsArray[6] = t_spd * t_level;
}

alchemistTroll::alchemistTroll(short t_level)
{
	alchemistTroll::statsArray[0] = m_hp * t_level;
	alchemistTroll::statsArray[1] = m_str * t_level;
	alchemistTroll::statsArray[2] = m_def* t_level;
	alchemistTroll::statsArray[3] = m_mgckA * t_level;
	alchemistTroll::statsArray[4] = m_mgckD * t_level;
	alchemistTroll::statsArray[5] = m_spd * t_level;
	alchemistTroll::statsArray[6] = m_lck * t_level;
}

alchemistTroll::alchemistTroll()
{
	alchemistTroll::statsArray[0] = m_hp;
	alchemistTroll::statsArray[1] = m_str;
	alchemistTroll::statsArray[2] = m_def;
	alchemistTroll::statsArray[3] = m_mgckA;
	alchemistTroll::statsArray[4] = m_mgckD;
	alchemistTroll::statsArray[5] = m_spd;
	alchemistTroll::statsArray[6] = m_lck;
}

short alchemistTroll::getStat(int t_arrayPos)
{
	return statsArray[t_arrayPos];
}

void alchemistTroll::attackSkills()
{
}

void alchemistTroll::defenseSkills()
{
}

void alchemistTroll::magicSkills()
{
}

playerTroll::playerTroll(short t_level, short t_hp, short t_str, short t_def, short t_mgckA, short t_mgckD, short t_spd, short t_lck)
{
	playerTroll::statsArray[0] = t_hp * t_level;
	playerTroll::statsArray[1] = t_str * t_level;
	playerTroll::statsArray[2] = t_def * t_level;
	playerTroll::statsArray[3] = t_mgckA * t_level;
	playerTroll::statsArray[4] = t_mgckD * t_level;
	playerTroll::statsArray[5] = t_spd * t_level;
	playerTroll::statsArray[6] = t_spd * t_level;
}

short playerTroll::getStat(int t_arrayPos)
{
	return statsArray[t_arrayPos];
}

void playerTroll::attackSkills()
{
}

void playerTroll::defenseSkills()
{
}

void playerTroll::magicSkills()
{
}


