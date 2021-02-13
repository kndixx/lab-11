#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    if (a % 2 == 0) {
        cout << "Четное ";
    } else {
        cout << "Нечетное ";
    }
    
    if (a / 10 == 0) {
        cout << "однозначное число";
        return 0;
    }
    
    if (a / 10 == 0) {
        cout << "двузначное число";
        return 0;
    }
    
    cout << "трехзначное число";
    
    return 0;
}
