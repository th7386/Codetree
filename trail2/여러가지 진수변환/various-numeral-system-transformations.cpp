#include <iostream>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;
    int digits[10];
    int cnt = 0;

    while (N >= B) {
        digits[cnt++] = N % B;
        N /= B;
    }

    digits[cnt++] = N;

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}
