#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {-1, 0, 1, 0};
    char directions[4] = {'S', 'W', 'N', 'E'};

    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (dir[i] == directions[j]) {
                x += dx[j] * dist[i];
                y += dy[j] * dist[i];
                break;
            }
        }
    }

    cout << x << " " << y;

    return 0;
}