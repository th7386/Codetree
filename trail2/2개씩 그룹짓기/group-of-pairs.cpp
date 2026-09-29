#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;
    int answer = 0;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + 2 * N);

    for (int i = 0; i < N; i++) {
        int sum = nums[i] + nums[2 * N - 1 - i];
        answer = max(answer, sum);
    }

    cout << answer;

    return 0;
}
