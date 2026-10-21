#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed;
    double N;
    cin >> N;
    cout.precision(2);
    cout << N;
    return 0;
}