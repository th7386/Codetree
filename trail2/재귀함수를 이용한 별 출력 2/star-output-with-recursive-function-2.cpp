#include <iostream>

using namespace std;

int n;

void PrintStars(int N) {
    if (N == 0) {
        return;
    }

    for (int i = 0; i < N; i++) {
        cout << "*" << " ";
    }
    cout << '\n';

    PrintStars(N - 1);

    for (int i = 0; i < N; i++) {
        cout << "*" << " ";
    }
    cout << '\n';
}

int main() {
    cin >> n;

    PrintStars(n);

    return 0;
}