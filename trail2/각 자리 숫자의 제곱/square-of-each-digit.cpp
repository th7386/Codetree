#include <iostream>

using namespace std;

int N;

int GetSquareSum(int N) {
    if (N == 0) {
        return 0;
    }

    int digit = N % 10;

    return digit * digit + GetSquareSum(N / 10);
}

int main() {
    cin >> N;

    cout << GetSquareSum(N);

    return 0;
}
