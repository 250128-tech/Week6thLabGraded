//
// Second - Product of Digits - 10pts
//
#include <iostream>
using namespace std;

int digitProduct( int n ) {
    int returneeproduct = 1;

    while ( true ) {
        if ( n != 0 ) {

            returneeproduct = returneeproduct * ( n % 10 );
            n /= 10;

            if ( n == 0 ) {
                break;
            }

        } else {
            returneeproduct = 0;
            break;
        }
    }
    return returneeproduct;
}

int main() {
    int n; cin >> n;
    cout << digitProduct( n );
    return 0;
}