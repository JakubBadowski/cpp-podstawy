#include <iostream>
#include "functions.h"
using namespace std;

void goWork(); // Nagłówek funkcji

int main()
{
	// int wynik = dodawajDwa(3);
	// cout << wynik << endl;

	// int wiek = 10;
	// cout << wiek << endl;
	// zmienWiek(wiek);
	// cout << wiek << endl;

	// int a = 0;
	// float b = 0;
	// double c = 0;

	// cout << a << endl << b << endl << c << endl;
	goWork();

	return 0;
}

void goWork()
{
	for (int i = 0; i < 100; ++i)
	{
		cout << "gitara" << endl;
	}
}
