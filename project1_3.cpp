#include <iostream>
#include <math.h>
#include <Windows.h> 
using namespace std;

int main() {  
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Введіть ціле число: ";
    cin >> a;

    cout << "Число до постфіксної інкрементації: " << a << endl;  
    int b = a++;
    cout << "Число після постфіксної інкрементації: " << b << endl;

    cout << "Число до префіксної інкрементації: " << a << endl;  
    int c = ++a;
    cout << "Число після префіксної інкрементації: " << c << endl;

    cout << "Число до постфіксної декрементації: " << a << endl; 
    int d = a--;
    cout << "Число після постфіксної декрементації: " << d << endl;

    cout << "Число до префіксної декрементації: " << a << endl;
    int e = --a;
    cout << "Число після префіксної декрементації: " << e << endl;

    return 0;
}
