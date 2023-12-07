#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 48 && ch <= 57) // (ch >= '0' && ch <= '9')
        cout << "IS DIGIT" << endl;
    else {
        cout << "ALPHA" << endl;
        if (ch >= 65 && ch <= 90) //(ch >= 'A' && ch <= 'Z')
            cout << "IS CAPITAL" << endl;
        else if (ch >= 97 && ch <= 122) // (ch >= 'a' && ch <='z')
            cout << "IS SMALL" << endl;
    }
    return 0;
}