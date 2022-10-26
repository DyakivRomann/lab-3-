#include <Windows.h>
#include "CarIO.h"
void operator += (Car& car, float a)
{
	car.addEnginePower(a);
}
class carManager
{
	int carCount = ConsoleIO::GetInt();
	Car* cars = new Car[carCount];
	CarIO* IOWorker = new CarIO();
public:
	carManager()
	{

	}
	~carManager(void)
	{
		delete[] cars;
		delete IOWorker;
	}

	void fillCars()
	{
		for (int i = 0; i < carCount; i++)
		{
			IOWorker->Input(cars[i]);
		}
	}
	void Show()
	{
		cout << endl;
		cout << "list" << endl;
		for (int i = 0; i < carCount; i++)
		{
			IOWorker->Output(cars[i]);
		}
	}
	void AddCars1()
	{

		AddCars(cars, carCount);
	}
	void AddCars(Car*& cars, int& carCount)
	{
		Car* newCars = new Car[carCount + 1];

		for (int i = 0; i < carCount; i++)
		{
			newCars[i] = cars[i];
		}

		IOWorker->Input(newCars[carCount]);

		carCount++;

		delete[] cars;

		cars = newCars;
	}
	void deleteCars1()
	{
		deleteCars(cars, carCount);
	}
	void deleteCars(Car*& cars, int& carCount)
	{
		Car* newCars = new Car[carCount - 1];

		for (int i = 0; i < carCount - 1; i++)
		{
			newCars[i] = cars[i];
		}

		carCount--;

		delete[] cars;

		cars = newCars;
	}
	void FindCar()
	{
		int a;
		cout << "\tenter the serial number of the car: ";
		cin >> a;
		a -= 1;
		for (int i = 0; i < carCount; i++)
		{
			if (a == i)
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void FindCarByEngineCapacity1()
	{
		float a;
		cout << "\tenter engine volume: ";
		cin >> a;
		for (int i = 0; i < carCount; i++)
		{
			if (a == cars[i].getEngineCapacity())
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void FindCarByEnginePower1()
	{
		float a;
		cout << "\t:enter engine power ";
		cin >> a;
		for (int i = 0; i < carCount; i++)
		{
			if (a == cars[i].getEnginePower())
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void FindCarByEngineSerialNumber1()
	{
		float a;
		cout << "\tenter engine serial number : ";
		cin >> a;
		for (int i = 0; i < carCount; i++)
		{
			if (a == cars[i].getEngineSerialNumber())
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void FindCarByCarMark1()
	{
		string a;
		FindCar(a);
	}
	void FindCar(string a)
	{
		cout << "\tenter brand: ";
		cin >> a;
		for (int i = 0; i < carCount; i++)
		{
			if (a == cars[i].getCarMark())
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void FindCarByCarColor1()
	{
		string a;
		cout << "\tenter color: ";
		cin >> a;
		for (int i = 0; i < carCount; i++)
		{
			if (a == cars[i].getCarColor())
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void FindCarByCarStateRegistration1()
	{
		float a = 0;
		FindCar(a);
	}
	void FindCar(float a)
	{
		cout << "\tenter car registration: ";
		cin >> a;
		for (int i = 0; i < carCount; i++)
		{
			if (a == cars[i].getCarRegistration())
			{
				IOWorker->Output2(cars[i]);
			}
		}
	}
	void addEnginePower1()
	{
		float a;
		float b;
		cout << "enter car numbers : ";
		cin >> a;
		a -= 1;
		cout << "enter the value to add to the power: ";
		cin >> b;
		for (int i = 0; i < carCount; i++)
		{
			if (a == i)
			{
				cars[i] += b;
				IOWorker->Output(cars[i]);
			}
		}
	}
};

