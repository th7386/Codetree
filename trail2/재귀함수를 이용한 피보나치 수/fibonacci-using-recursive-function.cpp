#include <iostream>

using namespace std;

int N;

int Fibonacci(int N) {
    if (N == 1 || N == 2) {
        return 1;
    }

    return Fibonacci(N - 1) + Fibonacci(N - 2);
}

int main() {
    cin >> N;

    cout << Fibonacci(N);

    return 0;
}