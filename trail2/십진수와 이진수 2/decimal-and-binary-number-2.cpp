#include <iostream>
#include <string>

using namespace std;

string N;

int main() {
    cin >> N;
    int binary[100];
    int cnt = 0;
    int num = 0;

    for (int i = 0; i < N.size(); i++) {
        num = num * 2 + (N[i] - '0');
    }

    num *= 17;

    while (num > 0) {
        binary[cnt++] = num % 2;
        num /= 2;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << binary[i];
    }

    return 0;
}
