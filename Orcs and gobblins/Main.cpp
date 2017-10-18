#include <iostream>
#include "Troll.h"
#include "Orc.h"
#include "main.h"
using namespace std;







int main(void)
{
	mainMenu();
	
	srand(time(NULL));
	
	

	babyTroll baby(5);
	Character* npc;
	npc = &baby;
	std::cout << npc->getStat(3) << std::endl;

	cin.get();
}

void mainMenu()
{
	cout << "      _____ ___________________		from makers of " << std::endl;
	cout << "     l     l_____/      l______		mass effect	   " << std::endl;
	cout << "     l_____l    l_____ ______l		text adventure	   " << std::endl;
	cout << "													   " << std::endl;
	cout << "				_____  /  						       " << std::endl;
	cout << "				l    l								   " << std::endl;
	cout << "				l    l								   " << std::endl;
	cout << "	_______ ___________            _______			   " << std::endl;
	cout << "	   l   l_____/     l     l     l______			   " << std::endl;
	cout << "	   l   l    \l_____l_____l___________l			   " << std::endl;
	cout << "													   " << std::endl << std::endl;
	system("Pause");
	system("CLS");
}

void characterChoice()
{
	cout << "Do you wish to fight for the Glory seeking ORCS, or the mighty war-mongering TROLLS!. Choose" << std::endl;
	
}
