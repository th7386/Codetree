#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

int minimum(int a, int b, int c) {
    int min = a;

    if (b < min)
        min = b;

    if (c < min)
        min = c;

    return min;
}

int main() {
    cin >> a >> b >> c;
    
    cout << minimum(a, b, c);

    return 0;
}