#include "Car.h"
#include "ConsoleIO.h"
using namespace std;

istream& operator >> (istream& in, Car& car)
{
	cout << endl;
	cout << "car " << endl;
	cout << "brand ";
	string a;
	in >> a;
	car.setCarMark(a);
	cout << "color ";
	in >> a;
	car.setCarColor(a);
	float b;
	cout << "car registration ";
	in >> b;
	ConsoleIO::G(b);
	car.setCarRegistration(b);

	cout << "engine " << endl;
	cout << "volume ";
	in >> b;
	car.setEngineCapacity(b);

	cout << "power ";
	in >> b;
	car.setEnginePower(b);

	cout << "Engine serial number ";
	in >> b;
	ConsoleIO::G(b);
	car.setEngineSerialNumber(b);
	return in;
}
ostream& operator << (ostream& out, Car& car)
{
	out << endl;
	out << "car " << endl;
	out << "brand " << car.getCarMark() << endl;
	out << "color " << car.getCarColor() << endl;
	out << "car registration " << car.getCarRegistration() << endl;
	out << "engine" << endl;
	out << "volume " << car.getEngineCapacity() << endl;
	out << "power " << car.getEnginePower() << endl;
	out << "engine serial number " << car.getEngineSerialNumber() << endl;
	out << endl;
	return out;
}
void Output1(Car& car)
{
	cout << endl;
	cout << "\tcar " << endl;
	cout << "\tbrand " << car.getCarMark() << endl;
	cout << "\tcolor " << car.getCarColor() << endl;
	cout << "\tcar registration" << car.getCarRegistration() << endl;
	cout << "\tengine" << endl;
	cout << "\tvolume " << car.getEngineCapacity() << endl;
	cout << "\tpower " << car.getEnginePower() << endl;
	cout << "\tengine serial number " << car.getEngineSerialNumber() << endl;
	cout << endl;
}

class CarIO
{
public:
	void Input(Car& car)
	{
		cin >> car;
	}
	void Output(Car& car)
	{
		cout << car;
	}
	void Output2(Car& car)
	{
		Output1(car);
	}
};

