#include "Menu.h"
int main()
{

	cout << "enter the number of cars: ";
	carManager allCars;
	cout << endl;
	Menu();
a:
	while (stateMenu != 0)
	{
		switch (stateMenu)
		{
		case 1:
			allCars.fillCars();
			cout << endl;
			Menu();
			break;
		case 2:
			allCars.Show();
			cout << endl;
			Menu();
			break;
		case 3:
			allCars.AddCars1();
			cout << endl;
			Menu();
			break;
		case 4:
			allCars.deleteCars1();
			cout << endl;
			Menu();
			break;
		case 5:
			allCars.addEnginePower1();
			cout << endl;
			Menu();
			break;
		case 6:
			Menu1();
			while (stateMenu != 0)
			{
				switch (stateMenu)
				{
				case 1:
					allCars.FindCar();
					cout << endl;
					Menu1();
					break;
				case 2:
					allCars.FindCarByEngineCapacity1();
					cout << endl;
					Menu1();
					break;
				case 3:
					allCars.FindCarByEnginePower1();
					cout << endl;
					Menu1();
					break;
				case 4:
					allCars.FindCarByEngineSerialNumber1();
					cout << endl;
					Menu1();
					break;
				case 5:
					allCars.FindCarByCarMark1();
					cout << endl;
					Menu1();
					break;
				case 6:
					allCars.FindCarByCarColor1();
					cout << endl;
					Menu1();
					break;
				case 7:
					allCars.FindCarByCarStateRegistration1();
					cout << endl;
					Menu1();
					break;
				case 8:
					Menu();
					goto a;
				default:
					cout << "error";
					Menu1();
				}

			}
		default:
			cout << endl;
			cout << "error" << endl;
			cout << endl;
			Menu();
		}
	}



}
