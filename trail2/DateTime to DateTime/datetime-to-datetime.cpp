#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int start = 11 * 24 * 60 + 11 * 60 + 11;
    int end = a * 24 * 60 + b * 60 + c;

    if (end < start) {
        cout << -1;
    }
    else {
        cout << end - start;
    }

    return 0;
}
