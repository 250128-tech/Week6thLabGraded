//
// Fifth - Twin Primes - 10pts
//
#include <iostream>
using namespace std;

bool isPrime( int n ) {
    bool ifPrime = 1;

    for ( int i = 2 ; i * i < n ; i++ ) {
        if ( n % i == 0) {
            return 0;
        }
    }
    return ifPrime;
}



int main() {
    int n; cin >> n;
    int c = 0;
    for ( int p = 2 ; p + 2 <= n ; p++ ) {
        if ( isPrime( p ) && isPrime( p + 2 )) {
            cout << " " << "(" << p << "," << p + 2 << ")" << " ";
            c++;
        }
    }
    cout << endl;
    cout << "count: " << c;
    return 0;
}