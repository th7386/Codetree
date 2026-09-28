#include <iostream>

using namespace std;

int M, D;

bool IsValidDate(int M, int D) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (M > 12) return false;
    if (D > days[M]) return false;
    return true;
}

int main() {
    cin >> M >> D;

    if (IsValidDate(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}
