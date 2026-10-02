#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int month = m1, day = d1;
    int elapsed_days = 0;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (;;) {
        if (month == m2 && day == d2) break;

        elapsed_days++;
        day++;

        if (day > num_of_days[month]) {
            month++;
            day = 1;
        }
    }

    cout << elapsed_days + 1;

    return 0;
}
