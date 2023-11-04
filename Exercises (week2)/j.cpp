#include <iostream>

using namespace std;

int main() {
    int s, hour, minute, second;
    cin >> s;
    hour = s / 3600;
    minute = (s - (hour * 3600)) / 60;
    second = (s - (hour * 3600) - (minute * 60));
    cout << hour << ':' << minute << ':' << second << endl;

    return 0;
}
// another solution
#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;
    cout << s / (60 * 60) << ':' << s % (60 * 60) / 60 << ':' << s % (60 * 60) % 60 << endl;
    return 0;
}