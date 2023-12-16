#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    // s[0] == '9'
    // will be one if the first digit of the number is 9
    // and zero otherwise
    for (int i = (s[0] == '9'); i < s.size(); i++)
    {
        if(s[i] > '4')
            s[i] = ('9' - s[i]) + '0';
    }
    
    cout << s;
    return 0;
}
