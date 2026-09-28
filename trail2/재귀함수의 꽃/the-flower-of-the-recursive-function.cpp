#include <iostream>

using namespace std;

int N;

void PrintNumber(int N) {
    if (N == 0) {
        return;
    }

    cout << N << " ";
    PrintNumber(N - 1);
    cout << N << " ";
}

int main() {
    cin >> N;

    PrintNumber(N);

    return 0;
}
