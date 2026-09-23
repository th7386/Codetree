#include <iostream>

using namespace std;

int N;

void PrintNLines(int n) {
    for(int i = 0; i < n; i++) {
        cout << "12345^&*()_" << '\n';
    }
}

int main() {
    cin >> N;

    PrintNLines(N);

    return 0;
}