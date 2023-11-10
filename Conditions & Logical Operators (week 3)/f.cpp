#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 97 && ch <= 122) //(ch >= 'a' && ch <= 'z')
        cout << char(ch - 32) << endl;
    else if (ch >= 65 && ch <= 90) //(ch >= 'A' && ch <= 'Z')
        cout << char(ch + 32) << endl;
    return 0;
}