#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
	int a, c, d;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть ціле число: ";
	cin >> a;
	int b = a % 7;
	cout << "Залишок:" << b << endl;

	cout << "Введіть два цілих числа черел Enter: ";
	cin >> c;
	cin >> d;
	
	if (c != 0) {
		if (c % d == 0) {
			cout << "Число " << c << " ділиться на " << d << " без залишку." << endl;
		}
		else {
			cout << "Число " << c << " не ділиться на " << d << " без залишку." << endl;
		}
	}
	else {
		cout << "Ділення на нуль неможливе!" << endl;
	}

	if (c % 2 == 0) {
		cout << "Число " << c << " парне" << endl;
	}
	else {
		cout << "Число " << c << " не парне" << endl;
	}

	if (d % 2 == 0) {
		cout << "Число " << d << " парне" << endl;
	}
	else {
		cout << "Число " << d << " не парне" << endl;
	}

	return 0;
}