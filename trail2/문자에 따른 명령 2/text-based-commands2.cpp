#include <iostream>
#include <string>

using namespace std;

string dirs;

int main() {
    cin >> dirs;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0;
    int dir = 0;

    for (int i = 0; i < dirs.size(); i++) {
        if (dirs[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else if (dirs[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if (dirs[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y;

    return 0;
}