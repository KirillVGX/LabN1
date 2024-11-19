#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    int a;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть вашу оцінку(0-100): ";
    cin >> a;

    if (a > 0 && a <= 40) cout << "Ваша оцінка незадовільно";
    if (a > 40 && a <= 60) cout << "Ваша оцінка задовільно";
    if (a > 60 && a <= 80) cout << "Ваша оцінка добре";
    if (a > 80 && a <= 100) cout << "Ваша оцінка відмінно";

    return 0;
}
