

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = 1; i <= 100; i++) {
        a = a * 3;
        b = b * 2;
        sum++;
        if (a > b) {
            cout << sum;
            break;
        }

    }
    return 0;
}
