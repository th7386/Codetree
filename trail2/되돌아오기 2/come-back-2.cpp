#include <iostream>
#include <string>

using namespace std;

string commands;

int main() {
    cin >> commands;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0;
    int dir = 0;
    int time = 0;

    for (int i = 0; i < commands.size(); i++) {
        if (commands[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else if (commands[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else {
            x += dx[dir];
            y += dy[dir];
        }

        time++;

        if (x == 0 && y == 0) {
            cout << time;
            return 0;
        }
    }

    cout << -1;

    return 0;
}