#include <iostream>

using namespace std;

int a, b;

void ChangeNumber(int& a, int& b) {
    if (a < b) {
        a = a + 10;
        b = b * 2;
    }
    else {
        a = a * 2;
        b = b + 10;
    }
}

int main() {
    cin >> a >> b;

    ChangeNumber(a, b);

    cout << a << " " << b;

    return 0;
}