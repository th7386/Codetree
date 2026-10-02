#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    int hour = a, mins = b;
    int elapsed_time = 0;

    for (;;) {
        if (hour == c && mins == d) break;

        elapsed_time++;
        mins++;

        if (mins == 60) {
            hour++;
            mins = 0;
        }
    }

    cout << elapsed_time;

    return 0;
}
