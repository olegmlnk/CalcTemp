#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void CelToKal(double celcium)
{
	double kalvin;
	kalvin = celcium + 273.15;
	cout << "Your temp in Kalvin is: " << kalvin << endl;
}

void CelToFahr(double celcium)
{
	double fahrenheit;
	fahrenheit = (celcium * 9 / 5 + 32);
	cout << "Your temp in Fahrenheit is: " << fahrenheit << endl;
}

void KalToCel(double kalvin)
{
	double celcium;
	celcium = kalvin - 273.15;
	cout << "Your temp in Celcium is: " << celcium << endl;
}

void KalToFahr(double kalvin)
{
	double fahrenheit;
	fahrenheit = (kalvin - 273.15 * (9 / 5) + 32);
		cout << "Your temp in Fahrenheit is: " << fahrenheit << endl;
}

void FahrToCel(double fahrenheit)
{
	double celcium;
	celcium = (fahrenheit / (9 / 5) + 32);
	cout << "Your temp in Celcium is: " << celcium << endl;
}

void FahrToKal(double fahrenheit)
{
	double kalvin;
	kalvin = (fahrenheit - 32) * (9 / 5) + 273.15;
	cout << "Your temp in Kalvin is: " << kalvin << endl;
}

void main()
{
	double celcium;
	double kalvin;
	double fahrenheit;
	
	cout << "From what to what kind of temp you want to return: " << endl;
	cout << "1. Celcium to Kalvin" << endl;
	cout << "2. Celcium to Fahrenheit" << endl;
	cout << "3. Kalvin to Celcuim" << endl;
	cout << "4. Kalvin to Fahrenheit" << endl;
	cout << "5. Fahrenheit to Celcium" << endl;
	cout << "6. Fahrenheit to Kalvin" << endl;
	
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter the temp: " << endl;
		cin >> celcium;
		CelToKal(celcium);
		break;
	case 2:
		cout << "Enter the temp: " << endl;
		cin >> celcium;
		CelToFahr(celcium);
		break;
	case 3:
		cout << "Enter the temp: " << endl;
		cin >> kalvin;
		KalToCel(kalvin);
		break;
	case 4:
		cout << "Enter the temp: " << endl;
		cin >> kalvin;
		KalToFahr(kalvin);
		break;
	case 5:
		cout << "Enter the temp: " << endl;
		cin >> fahrenheit;
		FahrToCel(fahrenheit);
		break;
	case 6:
		cout << "Enter the temp: " << endl;
		cin >> fahrenheit;
		FahrToKal(fahrenheit);
		break;
	default:
		cout << "Error" << endl;
		break;
	}
}

 