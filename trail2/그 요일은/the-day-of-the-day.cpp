#include <iostream>
#include <string>

using namespace std;

int m1, m2, d1, d2;
string A;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int days[13] = {
        0, 31, 29, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    string week[7] = {
        "Mon", "Tue", "Wed", "Thu",
        "Fri", "Sat", "Sun"
    };

    int day1 = d1;
    int day2 = d2;

    for (int i = 1; i < m1; i++) {
        day1 += days[i];
    }

    for (int i = 1; i < m2; i++) {
        day2 += days[i];
    }

    int diff = day2 - day1;
    int answer = 0;

    for (int i = 0; i <= diff; i++) {
        if (week[i % 7] == A) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}