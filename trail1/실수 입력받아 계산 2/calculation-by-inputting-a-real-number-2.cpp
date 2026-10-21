#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cin >> a;

    cout << fixed;
    cout.precision(2);
    cout << a + 1.5;
    return 0;
}