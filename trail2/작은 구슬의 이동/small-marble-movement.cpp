#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    char dirs[4] = {'U', 'R', 'D', 'L'};

    int dir = 0;

    for (int i = 0; i < 4; i++) {
        if (d == dirs[i]) {
            dir = i;
            break;
        }
    }

    for (int i = 0; i < t; i++) {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if (nr < 1 || nr > n || nc < 1 || nc > n) {
            dir = (dir + 2) % 4;
        }
        else {
            r = nr;
            c = nc;
        }
    }

    cout << r << " " << c;

    return 0;
}