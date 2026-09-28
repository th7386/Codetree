#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool IsSubString(int startIdx) {
    for (int i = 0; i < pattern.size(); i++) {
        if (text[startIdx + i] != pattern[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> text;
    cin >> pattern;

    int lenA = text.size();
    int lenB = pattern.size();

    for (int i = 0; i <= lenA - lenB; i++) {
        if (IsSubString(i)) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
