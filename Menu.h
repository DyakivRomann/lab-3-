#pragma once
#include "CarManager.h"

int stateMenu;
void Menu()
{
	cout << "menu" << endl
		<< "make a choice" << endl
		<< "(1) fill the cars" << endl
		<< "(2) show car" << endl
		<< "(3) add new car" << endl
		<< "(4) remove car" << endl
		<< "(5) add engine power" << endl
		<< "(6) search" << endl
		<< "(0) exit" << endl
		<< "Your choice: ";
	stateMenu = ConsoleIO::GetInt();
	cout << endl;
}
void Menu1()
{
	cout << "\tsearch menu" << endl

		<< "\t(1) search by serial number" << endl
		<< "\t(2) search by engine volume" << endl
		<< "\t(3) search by power volume" << endl
		<< "\t(4) search by engine serial number" << endl
		<< "\t(5) search by brand" << endl
		<< "\t(6) search by color" << endl
		<< "\t(7) search by state registration number" << endl
		<< "\t(8) main menu" << endl
		<< "\t(0) exit" << endl
		<< "\t:Your choice ";
	stateMenu = ConsoleIO::GetInt();
	cout << endl;
}


