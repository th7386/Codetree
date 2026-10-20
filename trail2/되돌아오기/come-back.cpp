#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};
    char directions[4] = {'W', 'S', 'E', 'N'};

    int x = 0, y = 0;
    int time = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 4; j++) {
            if (dir[i] == directions[j]) {
                for (int k = 0; k < dist[i]; k++) {
                    x += dx[j];
                    y += dy[j];
                    time++;

                    if (x == 0 && y == 0) {
                        cout << time;
                        return 0;
                    }
                }

                break;
            }
        }
    }

    cout << -1;

    return 0;
}