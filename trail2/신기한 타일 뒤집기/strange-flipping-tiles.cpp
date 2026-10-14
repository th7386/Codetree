#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int OFFSET = 100000;
    int tile[200001] = {};
    int cur = OFFSET;

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'L') {
            for (int j = 0; j < x[i]; j++) {
                tile[cur - j] = 1;
            }

            cur -= x[i] - 1;
        }
        else {
            for (int j = 0; j < x[i]; j++) {
                tile[cur + j] = 2;
            }

            cur += x[i] - 1;
        }
    }

    int white = 0;
    int black = 0;

    for (int i = 0; i < 200001; i++) {
        if (tile[i] == 1)
            white++;
        else if (tile[i] == 2)
            black++;
    }

    cout << white << " " << black;

    return 0;
}