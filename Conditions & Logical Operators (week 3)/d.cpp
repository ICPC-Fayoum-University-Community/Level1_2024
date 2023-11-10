#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b == d)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;
    return 0;
}