#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, ".1251");
	int a, b, r, dobutok, summa;
	cout << "������ ������ ";
	cin >> a;
	cout << "������ ������ ";
	cin >> b;
	float s = a * b;
	float p = 2 * (a + b);
	summa = s + p;
	r = s - p;
	dobutok = s * p;
	float c = s / p;
	cout << "�������� = " << p;
	cout << "����� = " << s;
	cout << "���� = " << summa; 
	cout << "������� = " << dobutok;
	cout << "г����� = " << r;
	cout << "������ = " << c << endl;
	return 0;
}