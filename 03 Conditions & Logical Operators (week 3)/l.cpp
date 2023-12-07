#include <iostream>

using namespace std;

int main() {
    int A;
    float B;
    cin >> B;
    A = B;
    if (B - A == 0)
        cout << "int " << A << endl;
    else
        cout << "float " << A << " " << B - A << endl;
    return 0;
}
