#include <iostream>
#include <string>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
    }

    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (weather[i] == "Rain") {
            if (idx == -1 || date[i] < date[idx]) {
                idx = i;
            }
        }
    }

    cout << date[idx] << " " << day[idx] << " " << weather[idx];

    return 0;
}