#include <iostream>

using namespace std;

int N;

void PrintHelloWorld(int n) {
    if (n == 0) {
        return;
    }

    cout << "HelloWorld" << '\n';

    PrintHelloWorld(n - 1);
}

int main() {
    int n;
    cin >> n;

    PrintHelloWorld(n);

    return 0;
}
