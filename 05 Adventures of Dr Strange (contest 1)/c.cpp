#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
     * num of odd nums = ceil(n / 2)
     * odd 2 * k - 1
     * even 2 * k
     * */

    long long n, k, num_odd;
    cin >> n >> k;

    num_odd = (n + 1) / 2;
    if (k <= num_odd)
    {
        cout << 2 * k - 1;
    }
    else
    {
        k -= num_odd;
        cout << 2 * k;
    }

    return 0;
}