#include <iostream>

using namespace std;

int main() {
    long long l1, r1, l2, r2;
    l1 %= 100;
    l2 %= 100;
    r1 %= 100;
    r2 %= 100;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 >= l2 && l2 >= l1 && r2 >= r1)
        cout << l2 << " " << r1 << endl;
    else if (r1 >= l2 && l2 <= l1 && r2 >= r1)
        cout << l1 << " " << r1 << endl;
    else if (r2 >= l1 && l2 >= l1 && r1 >= r2)
        cout << l2 << " " << r2 << endl;
    else if (r2 >= l1 && l2 <= l1 && r1 >= r2)
        cout << l1 << " " << r2 << endl;
    else
        cout << "-1" << endl;

    return 0;
}