#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;

int N;
int h[1000];
int w[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
    }

    tuple<int, int, int> students[1000];

    for (int i = 0; i < N; i++) {
        students[i] = make_tuple(-h[i], -w[i], i + 1);
    }

    sort(students, students + N);

    for (int i = 0; i < N; i++) {
        int height, weight, number;

        tie(height, weight, number) = students[i];

        cout << -height << " "
             << -weight << " "
             << number << '\n';
    }

    return 0;
}