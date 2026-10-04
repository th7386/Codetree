#include <iostream>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;
    int digits[10];
    int cnt = 0;

    if (B == 4) {
        for (;;) {
            if (N < 4) {
                digits[cnt++] = N;
                break;
            }
            digits[cnt++] = N % 4;
            N /= 4;
        }
    }
    else if (B == 8) {
        for (;;) {
            if (N < 8) {
                digits[cnt++] = N;
                break;
            }
            digits[cnt++] = N % 8;
            N /= 8;
        }
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}
