#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
    }

    int A = 0, B = 0;
    int i = 0, j = 0;
    int timeA = t[0], timeB = t2[0];

    int cnt = 0;
    int leader = 0;

    while (i < N && j < M) {
        A += v[i];
        B += v2[j];

        int now;

        if (A > B) now = 1;
        else if (A < B) now = 2;
        else now = 3;

        if (leader != now) cnt++;

        leader = now;

        timeA--;
        timeB--;

        if (timeA == 0) {
            i++;
            if (i < N) timeA = t[i];
        }

        if (timeB == 0) {
            j++;
            if (j < M) timeB = t2[j];
        }
    }

    cout << cnt;

    return 0;
}