#include <bits/stdc++.h>

using namespace std;

bool isEqual(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);
    if (isEqual(a, b, n))
    {
        cout << "yes\n"
             << 1 << ' ' << 1 << '\n';
        return 0;
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (l == -1)
                l = i;
            r = i;
        }
    }

    reverse(a + l, a + r + 1);
    if (isEqual(a, b, n))
    {
        cout << "yes\n"
             << l + 1 << ' ' << r + 1 << '\n';
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}