#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int n_lines = (n + 1) / 2;

    for (int line = n_lines; line >= 1; line--) {
        int spaces = n_lines - line;
        int stars = 2 * line - 1;

        for (int space = 1; space <= spaces; ++space) {
            cout << " ";
        }

        for (int star = 1; star <= stars; ++star) {
            cout << '*';
        }

        cout << '\n';
    }

    for (int line = 1; line <= n_lines; line++) {
        int spaces = n_lines - line;
        int stars = 2 * line - 1;

        for (int space = 1; space <= spaces; ++space) {
            cout << " ";
        }

        for (int star = 1; star <= stars; ++star) {
            cout << '*';
        }

        cout << '\n';
    }


    return 0;
}