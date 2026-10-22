//
// First - UglyNumber - 10pts
//
#include <iostream>
using namespace std;

bool isUgly( int n ) {
    bool StateBeauty;

    int increment = 2;
    while ( true ) {
        if ( n % increment == 0 ) {
            n /= increment;
            if ( increment != 2 && increment != 3 && increment != 5 ) {
                StateBeauty = 0;
                break;
            }
        }
        if ( n == 1 ) {
            StateBeauty = 1;
            break;
        }
        increment++;
    }

    return StateBeauty;
}

int main() {
    int n; cin >> n;
    cout << boolalpha << isUgly ( n );
    return 0;
}