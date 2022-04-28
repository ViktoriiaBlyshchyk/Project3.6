#include <iostream>
#include "D1.h"
#include "D2.h"
#include "D3.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 b1(10);
	cout << endl << "Ієрархія класу B1: " << endl;
	b1.show_B1();
	cout << "sizeof(B1) = " << sizeof(B1) << endl;

	B2 b2(100);
	cout << endl << "Ієрархія класу B2: " << endl;
	b2.show_B2();
	cout << "sizeof(B2) = " << sizeof(B2) << endl;

	D1 d1(20, 30);
	cout << endl << "Ієрархія класу D1: " << endl;
	d1.show_D1();
	cout << "sizeof(D1) = " << sizeof(D1) << endl;

	D2 d2(40, 50);
	cout << endl << "Ієрархія класу D2: " << endl;
	d2.show_D2();
	cout << "sizeof(D2) = " << sizeof(D2) << endl;

	D3 d(10, 20, 30, 40, 50);
	cout << "Ієрархія класу D3: " << endl;
	d.show_D3();
	d.show_D1();
	cout << "sizeof(D3) = " << sizeof(D3) << endl; 

	return 0;
}