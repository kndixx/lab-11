#include <iostream>
using namespace std;

int main() {
    double ax, ay;
    cin >> ax >> ay;
    
    if (ax > 0) {
        if (ay > 0) {
            cout << 1;
        } else {
            cout << 4;
        }
    } else {
        if (ay > 0) {
            cout << 2;
        } else {
            cout << 3;
        }
    }
    
    return 0;
}
