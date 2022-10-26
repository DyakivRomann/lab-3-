#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class ConsoleIO
{
public:
	static float CheckOnInt(float a)
	{
		if (static_cast<int>(a) != a)
		{
			throw a;
		}
		else
		{
			return a;
		}
	}
	static string GetText()
	{
		string value;
		cin >> value;
		return value;
	}
	static float GetValue()
	{
		float value;
		cin >> value;
		return value;
	}
	static float GetInt()
	{
		int i = 0;
		float value;
		while (i == 0)
		{
			cin >> value;
			try
			{
				float value1 = CheckOnInt(value);
				i++;
				return value1;
			}
			catch (const float a)
			{
				cout << "no " << endl;

			}
		}

	}
	static float G(float a)
	{
		int i = 0;
		while (i == 0 || i == 2)
		{
			if (i == 2)
			{
				cin >> a;
				i = 0;
			}
			try
			{
				float a1 = CheckOnInt(a);
				i++;
				return a1;
			}
			catch (const float a)
			{
				cout << "no " << endl;

				i += 2;
			}
		}
	}
};
