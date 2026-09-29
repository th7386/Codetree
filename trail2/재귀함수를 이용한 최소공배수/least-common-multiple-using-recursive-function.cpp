#include <iostream>
#include <numeric>

using namespace std;

int n;
int arr[10];

int GCD(int a, int b) {
    if (b == 0)
        return a;

    return GCD(b, a % b);
}

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int GetLCMAll(int arr[], int n) {
    if (n == 1)
        return arr[0];

    return LCM(GetLCMAll(arr, n - 1), arr[n - 1]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << GetLCMAll(arr, n);

    return 0;
}
