//
// Fourth - Smallest Integer Divisible by K - 10pts
//
#include <iostream>
using namespace std;

int smallestRepunitDivByK( int k ) {
    int r = 0;
    int i = 1;
    for ( i ; i <= k ; i++ ) {
        if ( ( 10 * r + 1 ) % k == 0 ) {
            return i;
            break;
        }
        r = r * 10 + 1;
        if ( i == k ) {
            i = -1;
            break;
        }
    }
    return i;
}



int main() {
    int k; cin >> k;
    cout << smallestRepunitDivByK( k );
    return 0;
}