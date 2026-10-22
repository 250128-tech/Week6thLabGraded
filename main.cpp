//
// Sixth - Largest and Smallest - 10pts
//
#include <iostream>
using namespace std;

int mx2( int a , int b ) {
    return( a > b ? a : b );
}

int mn2( int a , int b ) {
    return( a < b ? a : b );
}


int main() {
    int c; cin >> c;
    int mn = 1000000000;
    int mx = -1000000000;

    for ( c ; c > 0 ; c--) {
        int x; cin >> x;
        mx = mx2( mx , x);
        mn = mn2(mn ,x);
    }
    cout <<" max=" << mx << " min=" << mn;
    return 0;
}