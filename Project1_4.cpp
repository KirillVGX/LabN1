#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    int a, b;
    string c, d, e;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть ваш вік: ";
    cin >> a;
    cout << "Введіть вашу зарплатню: ";
    cin >> b;

    if (a > 20 && b > 400 && b < 1000) {
        cout << "We will consider your position" << endl;
        cout << "Введіть ваше ім'я: ";
        cin >> c;
        cout << "Введіть ваше прізвище: ";
        cin >> d;
        cout << "Введіть вашу бажану посаду: ";
        cin >> e;
        cout << "Ваш вік: " << a << endl;
        cout << "Ваша зарплатня: " << b << endl;
        cout << "Ваше ім'я: " << c << endl;
        cout << "Ваше прізвище: " << d << endl;
        cout << "Бажана посада: " << e << endl;
    }
    else {
        cout << "You are not suitable" << endl;
    }

    return 0;
}