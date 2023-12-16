#include <bits/stdc++.h>

using namespace std;


long long sum_digits(long long x) {
    long long sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

long long super_digit(long long x) {
    if (x < 10)
        return x;


    return super_digit(sum_digits(x));
}

int main() {
    string n;
    int k;
    cin >> n >> k;

    long long sum = 0;

    for (int i = 0; i < n.size(); ++i) {
        sum += (n[i] - '0');
    }

    sum *= k;

    cout << super_digit(sum);


    return 0;
}