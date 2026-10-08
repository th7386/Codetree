#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

bool board[2000][2000];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    int OFFSET = 1000;

    for (int x = x1[0]; x < x2[0]; x++) {
        for (int y = y1[0]; y < y2[0]; y++) {
            board[x + OFFSET][y + OFFSET] = true;
        }
    }


    for (int x = x1[1]; x < x2[1]; x++) {
        for (int y = y1[1]; y < y2[1]; y++) {
            board[x + OFFSET][y + OFFSET] = false;
        }
    }

    int minX = 2000;
    int minY = 2000;
    int maxX = -1;
    int maxY = -1;

    for (int x = 0; x < 2000; x++) {
        for (int y = 0; y < 2000; y++) {
            if (board[x][y]) {
                minX = min(minX, x);
                maxX = max(maxX, x);
                minY = min(minY, y);
                maxY = max(maxY, y);
            }
        }
    }

    if (maxX == -1) {
        cout << 0;
    }
    else {
        cout << (maxX - minX + 1) * (maxY - minY + 1);
    }
    

    return 0;
}