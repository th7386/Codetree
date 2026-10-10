#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 6, c = 7;

    int temp = c;

    c = b;
    b = a;
    a = temp;

    cout << a << '\n' << b << '\n' << c;

    return 0;
}
