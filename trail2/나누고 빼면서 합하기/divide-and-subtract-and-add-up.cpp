#include <iostream>

using namespace std;

int n, m;
int A[100];

int GetSum(int m) {
    int sum = 0;

    while (m >= 1) {
        sum += A[m - 1];

        if (m == 1) {
            break;
        }

        if (m % 2 == 0) {
            m /= 2;
        }
        else {
            m -= 1;
        }
    }

    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << GetSum(m);

    return 0;
}
