#include <iostream>
using namespace std;

bool isLeapYear(int y) {
    if (y % 400 == 0)
        return true;

    if (y % 100 == 0)
        return false;

    if (y % 4 == 0)
        return true;

    return false;
}

int main() {
    int y;
    cin >> y;

    if (isLeapYear(y))
        cout << "true";
    else
        cout << "false";

    return 0;
}