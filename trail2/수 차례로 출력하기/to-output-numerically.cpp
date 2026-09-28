#include <iostream>

using namespace std;

int N;

void PrintAscending(int N) {
    if (N == 0) {
        return;
    }

    PrintAscending(N - 1);
    cout << N << " ";
}

void PrintDescending(int N) {
    if (N == 0) {
        return;
    }

    cout << N << " ";
    PrintDescending(N - 1);
}

int main() {
    int N;
    cin >> N;

    PrintAscending(N);
    cout << '\n';

    PrintDescending(N);

    return 0;
}
