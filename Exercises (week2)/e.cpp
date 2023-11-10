#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653;

int main() {
    double a;
    cin >> a;
    cout << fixed << setprecision(9) << PI * (a * a);
}