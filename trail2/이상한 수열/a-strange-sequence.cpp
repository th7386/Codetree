#include <iostream>

using namespace std;

int N;

int GetValue(int N) {
    if (N == 1) return 1;
    if (N == 2) return 2;
    return GetValue(N / 3) + GetValue(N - 1);
}

int main() {
    cin >> N;

    cout << GetValue(N);

    return 0;
}
