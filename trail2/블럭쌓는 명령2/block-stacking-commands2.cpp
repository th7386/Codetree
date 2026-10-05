#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    int maxBlock = 0;
    int block[101] = {};

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < K; i++) {
        for (int j = A[i]; j <= B[i]; j++) {
            block[j]++;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (block[i] > maxBlock) maxBlock = block[i];
    }

    cout << maxBlock;

    return 0;
}
