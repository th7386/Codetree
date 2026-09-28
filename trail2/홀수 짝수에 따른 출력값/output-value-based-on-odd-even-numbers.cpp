#include <iostream>

using namespace std;

int N;

int GetSum(int N) {
    if (N <= 0) return 0;

    return N + GetSum(N - 2);
}

int main() {
    cin >> N;

    cout << GetSum(N);

    return 0;
}