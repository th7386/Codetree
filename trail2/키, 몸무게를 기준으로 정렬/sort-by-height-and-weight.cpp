#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

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

bool cmp(Person a, Person b) {
    if (a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    cin >> n;

    Person people[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        people[i] = Person(name[i], height[i], weight[i]);
    }

    sort(people, people + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << '\n';
    }

    return 0;
}
