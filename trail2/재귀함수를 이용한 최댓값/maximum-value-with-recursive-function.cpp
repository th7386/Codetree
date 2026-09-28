#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int GetMax(int n) {
    if (n == 1) return arr[0];

    return max(arr[n - 1], GetMax(n - 1));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << GetMax(n);

    return 0;
}
