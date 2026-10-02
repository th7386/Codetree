#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Student {
public:
    string name;
    int height;
    int weight;

    Student() {}

    Student(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(Student a, Student b) {
    return a.height < b.height;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
    }

    Student student[10];

    for (int i = 0; i < n; i++) {
        student[i] = Student(name[i], height[i], weight[i]);
    }

    sort(student, student + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << student[i].name << " "
             << student[i].height << " "
             << student[i].weight << '\n';
    }

    return 0;
}