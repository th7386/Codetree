#include <iostream>

using namespace std;

int N;

int Factorial(int N) {
    if (N == 0 || N == 1) return 1;
    return N * Factorial(N - 1);
}

int main() {
    cin >> N;

    cout << Factorial(N);

    return 0;
}