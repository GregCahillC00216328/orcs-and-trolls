#pragma once


#include <iostream>

using namespace std;
struct lootTable
{


	short Loot[5][5] = 
	{ 
	{0,1,2,3,4},		//This row represents the 'level' of the loot, as you prgress later into the game, the higher vals will open up
	{1,1,1,1,1},		//this row, after taking which collumn it is in from the row above, determines the strength of that tier of weapon. e.g col3 row 2 is stronger than col1 row5.
	{2,2,2,2,2},		//stonger loot. e.g. sword, sword+1, sword+2,sword+3 then 'insert super cool sword name here'
	{3,3,3,3,3},		//stronger loot again 
	{4,4,4,4,4}			//get lucky and you'll get weapns from this catagory
	};
};