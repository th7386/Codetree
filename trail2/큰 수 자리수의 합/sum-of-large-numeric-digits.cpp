#include <iostream>

using namespace std;

int a, b, c;

int GetDigitSum(int N) {
    if (N == 0) {
        return 0;
    }

    return N % 10 + GetDigitSum(N / 10);
}

int main() {
    cin >> a >> b >> c;

    int result = a * b * c;

    cout << GetDigitSum(result);

    return 0;
}
