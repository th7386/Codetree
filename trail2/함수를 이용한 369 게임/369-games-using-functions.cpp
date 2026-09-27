#include <iostream>
using namespace std;

bool Contains369(int n) {
    while (n > 0) {
        int digit = n % 10;

        if (digit == 3 || digit == 6 || digit == 9)
            return true;

        n /= 10;
    }

    return false;
}

bool Is369Number(int n) {
    if (n % 3 == 0)
        return true;

    if (Contains369(n))
        return true;

    return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for (int i = a; i <= b; i++) {
        if (Is369Number(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}