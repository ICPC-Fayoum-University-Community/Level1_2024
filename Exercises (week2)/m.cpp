#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double area = (a * b) - ((0.5 * (a - c)) * (b - d));
    cout << fixed << setprecision(6) << area;
}