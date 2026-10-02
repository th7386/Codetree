#include <iostream>
#include <algorithm>

using namespace std;

int N;
int sequence[1000];
int answer[1000];

class Number {
public:
    int value;
    int index;

    Number() {}

    Number(int value, int index) {
        this->value = value;
        this->index = index;
    }
};

bool cmp(Number a, Number b) {
    if (a.value != b.value) {
        return a.value < b.value;
    }

    return a.index < b.index;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }

    Number numbers[1000];

    for (int i = 0; i < N; i++) {
        numbers[i] = Number(sequence[i], i);
    }

    sort(numbers, numbers + N, cmp);

    for (int i = 0; i < N; i++) {
        answer[numbers[i].index] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}
