#include <iostream>

using namespace std;

int N;

int f(int N) {
    if (N == 1) return 2;
    if (N == 2) return 4;
    return (f(N - 1) * f( N - 2)) % 100;
}

int main() {
    cin >> N;

    cout << f(N);

    return 0;
}