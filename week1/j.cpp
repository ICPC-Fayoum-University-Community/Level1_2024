#include<iostream>
using namespace std;
int main()
{
    int a, b, c,plate;

    cin >> a >> b >> c;

    plate = b;
    b = a;
    a = plate;

    plate = c;
    c = a;
    a = plate;

    cout << a<<' ' << b <<' ' << c << endl;

    return 0;
}