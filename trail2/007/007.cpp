#include <iostream>
#include <string>

using namespace std;

class Secret {
public:
    string code;
    char place;
    int time;

    Secret(string code, char place, int time) {
        this->code = code;
        this->place = place;
        this->time = time;
    }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    Secret secret(secret_code, meeting_point, time);
    
    cout << "secret code : " << secret.code << '\n';
    cout << "meeting point : " << secret.place << '\n';
    cout << "time : " << secret.time << '\n';

    return 0;
}
