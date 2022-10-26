#include <iostream>
#include <string>

using namespace std;

class Engine
{
	float engineCapacity;
	float enginePower;
	float engineSerialNumber;
public:

	Engine()
	{
		engineCapacity = 0;
		enginePower = 0;
		engineSerialNumber = 0;
	}


	float getEngineCapacity()
	{
		return engineCapacity;
	}
	void setEngineCapacity(float engineCapacity)
	{
		this->engineCapacity = engineCapacity;
	}
	float getEnginePower()
	{
		return enginePower;
	}
	void setEnginePower(float enginePower)
	{
		this->enginePower = enginePower;
	}
	void addEnginePower(float enginePower)
	{
		this->enginePower += enginePower;
	}
	float getEngineSerialNumber()
	{
		return engineSerialNumber;
	}
	void setEngineSerialNumber(float engineSerialNumber)
	{
		this->engineSerialNumber = engineSerialNumber;
	}
};
class Car
{
	string carMark;
	string carColor;
	int carStateRegistration;

	Engine engine;

public:

	Car()
	{
		carStateRegistration = 0;
	}


	string getCarMark()
	{
		return carMark;
	}
	void setCarMark(string carMark)
	{
		this->carMark = carMark;
	}
	string getCarColor()
	{
		return carColor;
	}
	void setCarColor(string carColor)
	{
		this->carColor = carColor;
	}
	int getCarRegistration()
	{
		return carStateRegistration;
	}
	void setCarRegistration(int carStateRegistration)
	{
		this->carStateRegistration = carStateRegistration;
	}


	float getEngineCapacity()
	{
		return engine.getEngineCapacity();
	}
	void setEngineCapacity(float engineCapacity)
	{
		engine.setEngineCapacity(engineCapacity);
	}
	float getEnginePower()
	{
		return engine.getEnginePower();
	}
	void setEnginePower(float enginePower)
	{
		engine.setEnginePower(enginePower);
	}
	void addEnginePower(float enginePower)
	{
		engine.addEnginePower(enginePower);
	}
	float getEngineSerialNumber()
	{
		return engine.getEngineSerialNumber();
	}
	void setEngineSerialNumber(float engineSerialNumber)
	{
		engine.setEngineSerialNumber(engineSerialNumber);
	}
};

