#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class User {
public:
    string id;
    int level;

    User(string id, int level) {
        this->id = id;
        this->level = level;
    }
};

int main() {
    cin >> user2_id >> user2_level;

    User user1("codetree", 10);
    User user2(user2_id, user2_level);

    cout << "user " << user1.id << " lv " << user1.level << '\n';
    cout << "user " << user2.id << " lv " << user2.level << '\n';

    return 0;
}
