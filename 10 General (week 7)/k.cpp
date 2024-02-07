#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    while (cin >> c)
    {
        c = tolower(c);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
            cout << "." << c;
    }
    return 0;
}