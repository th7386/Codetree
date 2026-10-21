#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];

int board[101][101] = {};

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

bool InRange(int x, int y) {
    return x >= 1 && x <= N && y >= 1 && y <= N;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    for (int i = 0; i < M; i++) {
        board[r[i]][c[i]] = 1;

        int cnt = 0;

        for (int j = 0; j < 4; j++) {
            int nr = r[i] + dr[j];
            int nc = c[i] + dc[j];

            if (InRange(nr, nc) && board[nr][nc] == 1) {
                cnt++;
            }
        }

        cout << (cnt == 3 ? 1 : 0) << '\n';
    }

    return 0;
}