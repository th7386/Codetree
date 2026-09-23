#include <iostream>

using namespace std;

int n, m;

void gcd(int n, int m) {
    while (m != 0) {
        int temp = n % m;
        n = m;
        m = temp;
    }

    cout << n;
}

int main() {
    cin >> n >> m;

    gcd(n, m);

    return 0;
}
