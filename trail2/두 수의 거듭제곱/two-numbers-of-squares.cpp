#include <iostream>

using namespace std;

int a, b;

int Pow(int a, int b) {
    int prod = 1;
    for (int i  = 0; i < b; i++) {
        prod *= a;
    }
    return prod;
}

int main() {
    cin >> a >> b;

    cout << Pow(a, b);

    return 0;
}