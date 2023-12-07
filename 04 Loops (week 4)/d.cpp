#include <iostream>

using namespace std;

int main() {

    int m, num1 = 0, num2 = 1, result = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cout << result << "  ";
        num1 = num2;
        num2 = result;
        result = result + num1;

    }
    return 0;
}