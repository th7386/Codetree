#include <iostream>
using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++)
        cin >> d2[i] >> t2[i];

    int A[1000001] = {};
    int B[1000001] = {};

    int time = 0;

    for (int i = 0; i < n; i++) {
        int dir = (d[i] == 'R') ? 1 : -1;

        for (int j = 0; j < t[i]; j++) {
            A[time + 1] = A[time] + dir;
            time++;
        }
    }

    time = 0;

    for (int i = 0; i < m; i++) {
        int dir = (d2[i] == 'R') ? 1 : -1;

        for (int j = 0; j < t2[i]; j++) {
            B[time + 1] = B[time] + dir;
            time++;
        }
    }

    for (int i = 1; i <= time; i++) {
        if (A[i] == B[i]) {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}