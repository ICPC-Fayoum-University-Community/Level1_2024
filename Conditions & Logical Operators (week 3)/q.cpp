#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C, D;
    double k, y;
    cin >> A >> B >> C >> D;
    k = log(A) * B;
    y = log(C) * D;
    if (k > y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}