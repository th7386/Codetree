#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int OFFSET = 100;
    bool board[200][200] = {};

    for (int i = 0; i < N; i++) {
        for (int j = x[i]; j < x[i] + 8; j++) {
            for (int k = y[i]; k < y[i] + 8; k++) {
                board[j + OFFSET][k + OFFSET] = true;
            }
        }
    }

    int area = 0;

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            if (board[i][j]) {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}