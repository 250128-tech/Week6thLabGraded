//
// Third - SumofaRange - 10pts
//
#include <iostream>
using namespace std;

long long sumRange( int a, int b ) {
    long long BigSum = 0;

    if ( b > a ) {
        int cache = b;
        b = a;
        a = cache;
    }


    for( b ; b <= a ; b++ ) {
        BigSum += b;
    }

    return BigSum;
}

int main() {
    int a, b; cin >> a >> b;
    cout << sumRange( a , b);
    return 0;
}