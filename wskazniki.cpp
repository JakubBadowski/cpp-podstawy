#include <iostream>
using namespace std;

void refFunc(int& v, int x);

int main()
{
	// int k = 12;
	// cout << "Warosc k : " << k << " adres k: " << &k << endl;
	// int *w = &k;
	// cout << *w << endl;

	int x = 2;
	// refFunc(x, 5);
	// cout << x << endl;

	// int& test = x;
	int *wsk = &x;

	cout << wsk << endl;

	return 0;
}

void refFunc(int& v, int ile) 
{
	v += ile;
}