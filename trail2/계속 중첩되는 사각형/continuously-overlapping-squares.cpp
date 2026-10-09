#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    int OFFSET = 100;
    int board[200][200] = {};

    for (int i = 0; i < n; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for (int y = y1[i]; y < y2[i]; y++) {
                board[x + OFFSET][y + OFFSET] = (i % 2) + 1;
            }
        }
    }

    int area = 0;

    for (int x = 0; x < 200; x++) {
        for (int y = 0; y < 200; y++) {
            if (board[x][y] == 2) {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}