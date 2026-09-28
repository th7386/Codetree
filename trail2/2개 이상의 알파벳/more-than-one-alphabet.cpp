#include <iostream>
#include <string>

using namespace std;

string A;

bool HasTwoDifferent(string& A) {
    for (int i = 1; i < A.size(); i++) {
        if (A[i] != A[0]) {
            return true;
        }
    }

    return false;
}

int main() {
    cin >> A;

    if (HasTwoDifferent(A)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}