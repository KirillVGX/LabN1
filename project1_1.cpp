#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, ".1251");
	int a, b, r, dobutok, summa;
	cout << "Введіть ширину ";
	cin >> a;
	cout << "Введіть ширину ";
	cin >> b;
	float s = a * b;
	float p = 2 * (a + b);
	summa = s + p;
	r = s - p;
	dobutok = s * p;
	float c = s / p;
	cout << "Периметр = " << p;
	cout << "Площа = " << s;
	cout << "Сума = " << summa; 
	cout << "Добуток = " << dobutok;
	cout << "Різниця = " << r;
	cout << "частка = " << c << endl;
	return 0;
}
