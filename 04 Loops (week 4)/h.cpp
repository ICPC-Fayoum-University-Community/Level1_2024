#include <iostream>

using namespace std;

int main() {
    int cases, num1, num2;
    char ch;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> num1 >> ch >> num2;
        cout << num1 + num2 << endl;
    }
    return 0;
}