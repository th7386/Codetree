#include <iostream>
#include <string>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], address[MAX_N], region[MAX_N];

class Person {
public:
    string name;
    string address;
    string region;

    Person() {}

    Person(string name, string address, string region) {
        this->name = name;
        this->address = address;
        this->region = region;
    }
};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> address[i] >> region[i];
    }

    Person person[MAX_N];

    for (int i = 0; i < n; i++) {
        person[i] = Person(name[i], address[i], region[i]);
    }

    int maxIdx = 0;

    for (int i = 1; i < n; i++) {
        if (person[i].name > person[maxIdx].name) {
            maxIdx = i;
        }
    }

    cout << "name " << person[maxIdx].name << '\n';
    cout << "addr " << person[maxIdx].address << '\n';
    cout << "city " << person[maxIdx].region;

    return 0;
}