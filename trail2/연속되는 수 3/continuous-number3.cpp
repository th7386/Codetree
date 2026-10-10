#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int cnt = 1;
    int maxCnt = 1;

    for (int i = 1; i < N; i++) {
        if ((arr[i] > 0 && arr[i - 1] > 0) ||
            (arr[i] < 0 && arr[i - 1] < 0)) {
            cnt++;
        }
        else {
            cnt = 1;
        }

        maxCnt = max(maxCnt, cnt);
    }

    cout << maxCnt;

    return 0;
}