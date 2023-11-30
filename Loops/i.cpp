#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1000; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}