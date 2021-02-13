#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    cin >> a >> b >> c;
    
    int max1 = a;
    int max2 = -1;
    
    if (b > max1) {
        max1 = b;
    }
    if (c > max1) {
        max1 = c;
    }
    
    if (a > max2 && a < max1) {
        max2 = a;
    }
    if (b > max2 && b < max1) {
        max2 = b;
    }
    if (c > max2 && c < max1) {
        max2 = c;
    }
    
    if (max2 == -1) {
        max2 = a;
    }
    
    cout << max1 + max2;
    return 0;
}
