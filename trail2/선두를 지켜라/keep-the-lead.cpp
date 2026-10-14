#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];
int A[1000001], B[1000001];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> v[i] >> t[i];

    for (int i = 0; i < M; i++)
        cin >> v2[i] >> t2[i];

    int time = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < t[i]; j++) {
            A[time + 1] = A[time] + v[i];
            time++;
        }
    }

    time = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < t2[i]; j++) {
            B[time + 1] = B[time] + v2[i];
            time++;
        }
    }

    int cnt = 0;
    int leader = 0;

    for (int i = 1; i <= time; i++) {
        if (A[i] == B[i])
            continue;

        int now = (A[i] > B[i]) ? 1 : -1;

        if (leader != 0 && leader != now)
            cnt++;

        leader = now;
    }

    cout << cnt;

    return 0;
}