#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int n_lines = (n + 1) / 2;

    bool flag = false;

    for (int line = 1; line >= 1; (flag ? line-- : line++)) {
        int spaces = n_lines - line;
        int stars = 2 * line - 1;

        for (int space = 1; space <= spaces; ++space) {
            cout << " ";
        }

        for (int star = 1; star <= stars; ++star) {
            cout << '*';
        }
        cout << '\n';


        if (line == n_lines)
            flag = true;


    }


    return 0;
}