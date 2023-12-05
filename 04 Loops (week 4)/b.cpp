#include <iostream>
using namespace std ;
int main () {
    int t , i = 1  ;
    cin >> t ;
    while (i <= t) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == b + c) || (b == a + c) || (c == b + a))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
        i++;
    }
    return 0 ;

}