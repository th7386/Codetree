#include <iostream>
using namespace std;

bool check(int n) {
    int tens = n / 10;
    int ones = n % 10;
    if (n % 2 == 0 && (tens + ones) % 5 == 0)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;

    if (check(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}