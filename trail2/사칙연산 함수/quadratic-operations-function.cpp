#include <iostream>
using namespace std;

int a;
int c;
char o;


int add(int a, int c) {
    return a + c;
}

int subtract(int a, int c) {
    return a - c;
}

int multiply(int a, int c) {
    return a * c;
}

int divide(int a, int c) {
    return a / c;
}

int main() {
    cin >> a >> o >> c;

    switch (o) {
        case '+':
            cout << a << " " << o << " " << c << " = " << add(a, c);
            break;
        case '-':
            cout << a << " " << o << " " << c << " = " << subtract(a, c);
            break;
        case '*':
            cout << a << " " << o << " " << c << " = " << multiply(a, c);
            break;
        case '/':
            cout << a << " " << o << " " << c << " = " << divide(a, c);
            break;
        default:
            cout << "False";
    }

    return 0;
}
