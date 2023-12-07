#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    if (y1 == y2)
    {
        int dif = abs(x1 - x2);
        x3 = x1;
        y3 = y1 + dif;
        x4 = x2;
        y4 = y2 + dif;
        cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4;
    }
    else if (x1 == x2)
    {
        int dif = abs(y1 - y2);
        x3 = x1 + dif;
        y3 = y1;

        x4 = x2 + dif;
        y4 = y2;

        cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4;
    }
    else
    {
        if (abs(y2 - y1) == abs(x2 - x1))
        {
            x3 = x1, y3 = y2;
            x4 = x2, y4 = y1;

            cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4;
        }
        else
        {
            cout << "-1";
        }
    }

    return 0;
}