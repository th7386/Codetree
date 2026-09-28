#include <iostream>
#include <string>

using namespace std;

int Y, M, D;

bool IsLeapYear(int Y) {
    if (Y % 400 == 0)
        return true;
    if (Y % 100 == 0)
        return false;
    if (Y % 4 == 0)
        return true;

    return false;
}

bool IsValidDate(int Y, int M, int D) {
    int days[13] = {
        0,
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
    };

    if (M < 1 || M > 12)
        return false;

    if (IsLeapYear(Y))
        days[2] = 29;

    if (D < 1 || D > days[M])
        return false;

    return true;
}

string GetSeason(int M) {
    if (M >= 3 && M <= 5)
        return "Spring";
    else if (M >= 6 && M <= 8)
        return "Summer";
    else if (M >= 9 && M <= 11)
        return "Fall";
    else
        return "Winter";
}

int main() {
    cin >> Y >> M >> D;

    if (!IsValidDate(Y, M, D)) cout << -1;
    else cout << GetSeason(M);

    return 0;
}
