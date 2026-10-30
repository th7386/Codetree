#include <iostream>

using namespace std;

int n;
int grid[100][100];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin >> n;

    int x = n / 2;
    int y = n / 2;
    int dir = 0;

    int move = 1;
    int num = 1;

    grid[x][y] = num++;

    while (num <= n * n) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < move; j++) {
                x += dx[dir];
                y += dy[dir];

                if (InRange(x, y)) {
                    grid[x][y] = num++;
                }

                if (num > n * n)
                    break;
            }

            dir = (dir + 1) % 4;

            if (num > n * n)
                break;
        }

        move++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
