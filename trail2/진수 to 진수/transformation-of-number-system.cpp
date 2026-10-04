#include <iostream>
#include <string>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    int num = 0;

    for (int i = 0; i < n.size(); i++) {
        num = num * a + (n[i] - '0');
    }

    if (num == 0) {
        cout << 0;
        return 0;
    }

    int digits[20];
    int cnt = 0;

    while (num > 0) {
        digits[cnt++] = num % b;
        num /= b;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}