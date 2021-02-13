#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    
    if (a == b) {
        a = 0;
        b = 0;
        
        cout << a << " " << b;
    } else {
        int max = a;
        if (b > max) {
            max = b;
        }
        a = max;
        b = max;
        
        cout << a << " " << b;
    }
    return 0;
}
