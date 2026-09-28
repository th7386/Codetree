#include <iostream>
#include <string>

using namespace std;

string A;

bool IsPalindrome(string& str) {
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> A;

    if(IsPalindrome(A)) cout << "Yes";
    else cout << "No";

    return 0;
}
