#include <iostream>
using namespace std;

int main() {
    double ax, ay;
    double bx, by;
    double cx, cy;
    
    cin >> ax >> ay
        >> bx >> by
        >> cx >> cy;
        
    double len1 = (ax - bx) * (ax - bx) + (ay - by) * (ay - by);
    double len2 = (ax - cx) * (ax - cx) + (ay - cy) * (ay - cy);
    
    if (len1 < len2) {
        cout << "B (" << bx << ", " << by << "); |AB| = " << len1;
    } else {
        cout << "C (" << cx << ", " << cy << "); |AC| = " << len2;
    }
    
    return 0;
}
