#include <iostream>
#include <string>

using namespace std;

class Secret {
public:
    string secret_code;
    char meeting_point;
    int time;

    Secret(string secret_code, char meeting_point, int time) {
        this->secret_code = secret_code;
        this->meeting_point = meeting_point;
        this->time = time;
    }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    Secret secret(secret_code, meeting_point, time);
    
    cout << "secret code : " << secret.secret_code << '\n';
    cout << "meeting point : " << secret.meeting_point << '\n';
    cout << "time : " << secret.time << '\n';

    return 0;
}
