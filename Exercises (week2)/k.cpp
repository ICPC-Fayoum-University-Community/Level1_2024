#include <iostream>

using namespace std;

int main() {
    int balance, count100, count20, count10, count5, count1;
    cin >> balance;

    count100 = balance / 100;
    balance %= 100;

    count20 = balance / 20;
    balance %= 20;

    count10 = balance / 10;
    balance %= 10;

    count5 = balance / 5;
    balance %= 5;

    count1 = balance;

    cout << count100 + count20 + count10 + count5 + count1 << "\n";

    return 0;
}
