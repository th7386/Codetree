#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int GetDayCount(int M, int D) {
    int days[13] = {
        0,
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    int count = 0;

    for (int i = 1; i < M; i++) {
        count += days[i];
    }

    count += D;

    return count;
}


int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    string week[7] = {
        "Mon", "Tue", "Wed", "Thu",
        "Fri", "Sat", "Sun"
    };

    int day1 = GetDayCount(m1, d1);
    int day2 = GetDayCount(m2, d2);

    int diff = day2 - day1;

    int index = (diff % 7 + 7) % 7;

    cout << week[index];

    return 0;
    return 0;
}