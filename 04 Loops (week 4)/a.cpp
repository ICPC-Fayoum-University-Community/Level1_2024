#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        char a, b, c;
        cin >> a >> b >> c;
        if ((a == 'Y' || a == 'y')
            && (b == 'E' || b == 'e')
            && (c == 'S' || c == 's'))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
//    int i = 0;
//    while (i < n) {
//        char a, b, c;
//        cin >> a >> b >> c;
//        if ((a == 'Y' || a == 'y')
//        && (b == 'E' || b == 'e')
//        && (c == 'S' || c == 's'))
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//        i++;
//    }
}