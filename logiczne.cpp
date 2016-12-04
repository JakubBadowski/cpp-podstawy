#include <iostream>
using namespace std;

bool isEqual(int a, int b);

int main()
{
	bool a,b,c,d;
	a = (2>3);
	b = (1 == 2);
	c = isEqual(1,2);
	d = isEqual(9,9);

	cout << a << endl << b << endl << c << endl << d << endl;

	return 0;
}

bool isEqual(int a, int b)
{
	return (a == b);
}