#include <iostream>
#include <algorithm>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    int answer = 0;

    for (int i = 0; i < 2; i++) {
        int area = (x2[i] - x1[i]) * (y2[i] - y1[i]);

        int overlapWidth =
            max(0, min(x2[i], x2[2]) - max(x1[i], x1[2]));

        int overlapHeight =
            max(0, min(y2[i], y2[2]) - max(y1[i], y1[2]));

        int overlapArea = overlapWidth * overlapHeight;

        answer += area - overlapArea;
    }

    cout << answer;

    return 0;
}