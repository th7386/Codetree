#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

string name[5];
int height[5];
double weight[5];

class Person {
public:
    string name;
    int height;
    double weight;

    Person() {}

    Person(string name, int height, double weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool CmpName(Person a, Person b) {
    return a.name < b.name;
}

bool CmpHeight(Person a, Person b) {
    return a.height > b.height;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
    }

    Person people[5];

    for (int i = 0; i < 5; i++) {
        people[i] = Person(name[i], height[i], weight[i]);
    }

    cout << fixed;
    cout.precision(1);

    sort(people, people + 5, CmpName);

    cout << "name" << '\n';
    for (int i = 0; i < 5; i++) {
        cout << people[i].name << " "
             << people[i].height << " "
             << people[i].weight << '\n';
    }

    cout << '\n';

    sort(people, people + 5, CmpHeight);

    cout << "height" << '\n';
    for (int i = 0; i < 5; i++) {
        cout << people[i].name << " "
             << people[i].height << " "
             << people[i].weight << '\n';
    }

    return 0;
}