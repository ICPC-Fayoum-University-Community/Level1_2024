#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n + 1];
    
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        
        if(a[i] != a[i - 1])
            ans++;
    }

    cout << ans;

    return 0;
}
