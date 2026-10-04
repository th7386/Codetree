#include <iostream>
#include <cstring>

using namespace std;

char binary[9];

int main() {
    cin >> binary;
    int num = 0;

    for (int i = 0; i < strlen(binary); i++) {
        num = num * 2 + (binary[i] - '0');
    }

    cout << num;

    return 0;
}
