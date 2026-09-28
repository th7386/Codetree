#include <iostream>

using namespace std;

int n;
int arr[50];

void DivideByTwo(int& x) {
    if (x % 2 == 0) {
        x /= 2;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        DivideByTwo(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
