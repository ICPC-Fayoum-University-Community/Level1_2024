#include <iostream>

using namespace std;

int main() {
    int numberOfDays, years, months, days, quotient;
    cin >> numberOfDays;

    years = numberOfDays / 365;
    quotient = numberOfDays % 365;

    months = quotient / 30;
    quotient %= 30;

    days = quotient;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}