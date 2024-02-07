#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << n << '\n';
    for (int i = 0; i < n; i++)
    {
        int mn = i;
        for (int j = i; j < n; j++)
        {
            if(a[j] < a[mn])
            {
                mn = j;
            }
        }
        cout << i << ' ' << mn << '\n';
        swap(a[i], a[mn]);
    }
    

    return 0;
}