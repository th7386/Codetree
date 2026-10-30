#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;

int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};

bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    int r, c, dir;

    if (k <= n) {
        r = 0;
        c = k - 1;
        dir = 1;
    }
    else if (k <= 2 * n) {
        r = k - n - 1;
        c = n - 1;
        dir = 2;
    }
    else if (k <= 3 * n) {
        r = n - 1;
        c = 3 * n - k;
        dir = 3;
    }
    else {
        r = 4 * n - k;
        c = 0;
        dir = 0;
    }

    int cnt = 0;

    while (InRange(r, c)) {
        cnt++;

        if (grid[r][c] == '/') {
            dir = 3 - dir;
        }
        else {
            dir = dir ^ 1;
        }

        r += dr[dir];
        c += dc[dir];
    }

    cout << cnt;

    return 0;
}