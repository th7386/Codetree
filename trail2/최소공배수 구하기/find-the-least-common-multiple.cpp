#include <iostream>

using namespace std;

int n, m;

void lcm(int n, int m) {
    int result = (n > m) ? n : m;

    for (;;) {
        if (result % n == 0 && result % m == 0) {
            cout << result;
            return;
        }
        result++;
    }
}

int main() {
    cin >> n >> m;

    lcm(n, m);

    return 0;
}