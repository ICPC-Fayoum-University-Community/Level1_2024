#include <iostream>

using namespace std;

int main() {
    long long A, B, C, D, S;
    cin >> A >> B >> C >> D;
    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;
    S = (A * B * C * D);
    S = S % 100;

    if (S < 10)
        cout << 0 << S << endl;
    else
        cout << S << endl;
    return 0;
}