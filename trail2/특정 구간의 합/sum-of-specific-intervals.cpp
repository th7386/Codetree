#include <iostream>

using namespace std;

int n, m;
int arr[101];
int queryA1[101];
int queryA2[101];

int GetSum(int a1, int a2) {
    int sum = 0;

    for (int i = a1; i <= a2; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> queryA1[i] >> queryA2[i];
    }

    for (int i = 0; i < m; i++) {
        cout << GetSum(queryA1[i], queryA2[i]) << '\n';
    }

    return 0;
}