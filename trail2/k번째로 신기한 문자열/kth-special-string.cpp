#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];
string result[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        bool isSame = true;

        if (str[i].size() < t.size()) {
            isSame = false;
        }
        else {
            for (int j = 0; j < t.size(); j++) {
                if (str[i][j] != t[j]) {
                    isSame = false;
                    break;
                }
            }
        }

        if (isSame) {
            result[cnt] = str[i];
            cnt++;
        }
    }

    sort(result, result + cnt);

    cout << result[k - 1];

    return 0;
}