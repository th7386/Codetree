#include <iostream>
#include <algorithm>

using namespace std;

class Point {
public:
    int dist;
    int number;

    Point() {}

    Point(int x, int y, int number) {
        dist = abs(x) + abs(y);
        this->number = number;
    }
};

bool cmp(Point a, Point b) {
    if (a.dist != b.dist) {
        return a.dist < b.dist;
    }

    return a.number < b.number;
}

int main() {
    int N;
    cin >> N;

    Point points[1000];

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;

        points[i] = Point(x, y, i + 1);
    }

    sort(points, points + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << points[i].number << '\n';
    }

    return 0;
}