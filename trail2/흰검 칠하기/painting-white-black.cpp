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
    int whiteCnt[200001] = {};
    int blackCnt[200001] = {};

    int cur = OFFSET;

    for (int i = 0; i < n; i++) {
        int color = (dir[i] == 'L') ? 1 : 2;
        int move = (dir[i] == 'L') ? -1 : 1;

        for (int j = 0; j < x[i]; j++) {
            int pos = cur + j * move;

            if (tile[pos] == 3)
                continue;

            if (color == 1)
                whiteCnt[pos]++;
            else
                blackCnt[pos]++;

            if (whiteCnt[pos] >= 2 && blackCnt[pos] >= 2)
                tile[pos] = 3;
            else
                tile[pos] = color;
        }

        cur += (x[i] - 1) * move;
    }

    int white = 0, black = 0, gray = 0;

    for (int i = 0; i < 200001; i++) {
        if (tile[i] == 1)
            white++;
        else if (tile[i] == 2)
            black++;
        else if (tile[i] == 3)
            gray++;
    }

    cout << white << " " << black << " " << gray;

    return 0;
}
