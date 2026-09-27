#include <iostream>
using namespace std;

int n1, n2;
int a[100], b[100];

bool isSubsequence() {
    if (n2 > n1) return false;

    for (int i = 0; i <= n1 - n2; i++) {
        bool same = true;

        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                same = false;
                break;
            }
        }

        if (same) return true;
    }

    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if (isSubsequence())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}