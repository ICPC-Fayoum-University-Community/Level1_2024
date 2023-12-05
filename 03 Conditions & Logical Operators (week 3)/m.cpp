#include <iostream>

using namespace std;

int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '<') {
        if (a < b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    } else if (c == '>') {
        if (a > b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    if (c == '=') {
        if (a == b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    return 0;
}