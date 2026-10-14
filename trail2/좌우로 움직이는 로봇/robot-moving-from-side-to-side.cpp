
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int a[2000001];
int b[2000001];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
    }

    int timeA = 0, timeB = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t[i]; j++) {
            timeA++;

            if (d[i] == 'R')
                a[timeA] = a[timeA - 1] + 1;
            else
                a[timeA] = a[timeA - 1] - 1;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < t_b[i]; j++) {
            timeB++;

            if (d_b[i] == 'R')
                b[timeB] = b[timeB - 1] + 1;
            else
                b[timeB] = b[timeB - 1] - 1;
        }
    }

    int maxTime = max(timeA, timeB);

    for (int i = timeA + 1; i <= maxTime; i++)
        a[i] = a[i - 1];

    for (int i = timeB + 1; i <= maxTime; i++)
        b[i] = b[i - 1];

    int cnt = 0;

    for (int i = 1; i <= maxTime; i++) {
        if (a[i] == b[i] && a[i - 1] != b[i - 1])
            cnt++;
    }

    cout << cnt;

    return 0;
}
