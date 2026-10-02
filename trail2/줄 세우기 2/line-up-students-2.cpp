#include <iostream>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

class Student {
public:
    int h, w, n;

    Student() {}

    Student(int h, int w, int n) {
        this->h = h;
        this->w = w;
        this->n = n;
    }
};

bool cmp(Student a, Student b) {
    if (a.h != b.h) return a.h < b.h;

    return a.w > b.w;
}

int main() {
    cin >> N;

    Student students[1000];

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        students[i] = Student(h[i], w[i], i + 1);
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << students[i].h << " " << students[i].w << " " << students[i].n << '\n';
    }

    return 0;
}
