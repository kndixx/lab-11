#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    if (a == 0) {
        cout << "Нулевое число";
        return 0;
    }
    
    if (a > 0) {
        cout << "Положительное ";
    } else {
        cout << "Отрицательное ";
    }
    
    if (a % 2 == 0) {
        cout << "четное число";
    } else {
        cout << "нечетное число";
    }
    
    return 0;
}
