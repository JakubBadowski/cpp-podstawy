#include <iostream>
using namespace std;

void checkFi();
void changeFi();
float divNumb();
int modNumb(int a, int b);

const float pi = 3.14;
float fi = 1.61;

const bool isFine = false;

int main()
{
	// cout << "PI ma wartosc: " << pi << endl;
	// cout << "Fi ma wartosc: " << fi << endl;

	// checkFi();
	// changeFi();
	// checkFi();

	// cout << isFine;

	float numb = divNumb();
	cout << numb << endl;

	int mod = modNumb(10, 3);
	cout << mod << endl;

	// int a = 2;
	// int b = 5;

	// int n = a + b++;
	// cout << n << endl << b << endl;
	// int m = a + ++b; // Priorytet ma inkrementacja
	// cout << m << endl;


	return 0;
}

float divNumb()
{
	return 10.0 / 3.0;
}

int modNumb(int y, int z)
{
	return y % z;
}

void checkFi()
{
	cout << fi << endl;
}

void changeFi()
{
	fi = fi + 1;
}