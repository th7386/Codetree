#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Bomb {
public:
    string unlock_code;
    char wire_color;
    int seconds;

    Bomb(string unlock_code, char wire_color, int seconds) {
        this->unlock_code = unlock_code;
        this->wire_color = wire_color;
        this->seconds = seconds;
    }

};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    Bomb bomb(unlock_code, wire_color, seconds);

    cout << "code : " << bomb.unlock_code << '\n';
    cout << "color : " << bomb.wire_color << '\n';
    cout << "second : " << bomb.seconds;

    return 0;
}
