#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    int line[2001] = {};
    int cur = 0;
    int OFFSET = 1000;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            for (int j = cur; j < cur + x[i]; j++) {
                line[j + OFFSET]++;
            }

            cur += x[i];
        }
        else {
            for (int j = cur - 1; j >= cur - x[i]; j--) {
                line[j + OFFSET]++;
            }

            cur -= x[i];
        }
    }

    int answer = 0;

    for (int i = 0; i < 2001; i++) {
        if (line[i] >= 2) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}
