#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int line[101] = {};
    int maxCnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = x1[i]; j <= x2[i]; j++) {
            line[j]++;
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (line[i] > maxCnt) {
            maxCnt = line[i];
        }
    }

    cout << maxCnt;

    return 0;
}
