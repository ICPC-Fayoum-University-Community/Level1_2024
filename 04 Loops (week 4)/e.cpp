#include <iostream>

using namespace std;

int main() {
    int n, num, mod, div;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 0)
            cout << 0;
        mod = num % 10;
        div = num / 10;
        while (!(div == 0 && mod == 0)) {
            cout << mod << ' ';
            mod = div % 10;
            div = div / 10;
        }
        cout << endl;
    }
    return 0;
}