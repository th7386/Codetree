#include <iostream>

using namespace std;

int n;

int GetCount(int N) {
    if (N == 1) {
        return 0;
    }

    if (N % 2 == 0) {
        return 1 + GetCount(N / 2);
    }
    else {
        return 1 + GetCount(N * 3 + 1);
    }
}

int main() {
    cin >> n;

    cout << GetCount(n);

    return 0;
}