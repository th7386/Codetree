#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N;
    cin >> N;

    cout << fixed;
    cout.precision(1);
    cout << N * 30.48;
    return 0;
}
