#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        cout << (w == h ? "Square" : "Rectangle") << '\n';
    }
    return 0;
}