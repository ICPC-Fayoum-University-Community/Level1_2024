#include <iostream>

using namespace std;

int main() {

    long long se = 0, so = 0, s, a, b;
    cin >> a >> b;

    if (a > b || b > a)
        s = ((abs(b - a) + 1) * (b + a)) / 2;

    else if (a == b)
        s = a * 2;

    cout << s << endl;

    if (a % 2 == 1 && b > a)
        a += 1;

    else if (a % 2 == 1 && a > b)
        a -= 1;

    if (b % 2 == 1 && b > a)
        b -= 1;

    else if (b % 2 == 1 && a > b)
        b += 1;

    if (b > a)
        se = (2 * a + b - a) * (1 + (b - a) / 2) / 2;

    else if (a > b)
        se = (2 * b + a - b) * (1 + (a - b) / 2) / 2;

    if (a == b && a % 2 == 0)
        se = 2 * a;
    else if (a == b && a % 2 == 1)
        se = 0;

    cout << se << endl;
    so = s - se;
    cout << so << endl;

    return 0;
}

// another solution

#include <bits/stdc++.h>

using namespace std;


int main() {

    long long a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    long long sum_all = (b * (b + 1) / 2) - ((a - 1) * (a) / 2);

    long long nb = (b + 1) / 2;
    long long na = (a - (a % 2)) / 2;
    long long sum_odd = (nb * nb) - (na * na);

    cout << sum_all << '\n'
         << sum_all - sum_odd << '\n'
         << sum_odd;


    return 0;
}