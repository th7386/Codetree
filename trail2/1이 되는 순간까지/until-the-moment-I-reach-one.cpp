#include <iostream>

using namespace std;

int N;

int GetCount(int N) {
    if (N == 1) {
        return 0;
    }

    if (N % 2 == 0) {
        return 1 + GetCount(N / 2);
    }
    else {
        return 1 + GetCount(N / 3);
    }
}

int main() {
    cin >> N;

    cout << GetCount(N);

    return 0;
}