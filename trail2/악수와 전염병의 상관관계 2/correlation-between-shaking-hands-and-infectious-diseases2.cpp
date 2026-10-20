#include <iostream>

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

int main() {
    cin >> N >> K >> P >> T;

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    int person1[251] = {};
    int person2[251] = {};

    for (int i = 0; i < T; i++) {
        person1[t[i]] = x[i];
        person2[t[i]] = y[i];
    }

    bool infected[101] = {};
    int remain[101] = {};

    infected[P] = true;
    remain[P] = K;

    for (int i = 1; i <= 250; i++) {
        int a = person1[i];
        int b = person2[i];

        if (a == 0) continue;

        bool canA = infected[a] && remain[a] > 0;
        bool canB = infected[b] && remain[b] > 0;

        if (canA) remain[a]--;
        if (canB) remain[b]--;

        if (canA && !infected[b]) {
            infected[b] = true;
            remain[b] = K;
        }

        if (canB && !infected[a]) {
            infected[a] = true;
            remain[a] = K;
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << infected[i];
    }

    return 0;
}