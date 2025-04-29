#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string Name, int Age) {
        name = Name;
        age = Age;
    }

    void display() {
        cout << "Name: " << name << endl;
     cout << "Age: " << age << endl;   
    }
};

int main() {
    Student s1("prince chauhan", 18);

    s1.display();

    return 0;
}
