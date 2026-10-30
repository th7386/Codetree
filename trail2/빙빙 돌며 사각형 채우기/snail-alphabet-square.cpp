#include <iostream>

using namespace std;

int n, m;
char arr[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    cin >> n >> m;

    int x = 0, y = 0;
    int dir = 0;

    for (int i = 0; i < n * m; i++) {
        arr[x][y] = 'A' + (i % 26);

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != '\0') {
            dir = (dir + 1) % 4;
        }

        if (i < n * m - 1) {
            x += dx[dir];
            y += dy[dir];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
