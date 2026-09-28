#include <iostream>

using namespace std;

int N;

int Sum(int N) {
    if (N == 1) return 1;
    return N + Sum(N - 1);
}

int main() {
    cin >> N;

    cout << Sum(N);

    return 0;
}