#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string n) { 
        name = n;
     }
    void setAge(int a) { 
        age = a;
     }

    int getAge() {
         return age;
         }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1, p2;

    p1.setName("Yash");
    p1.setAge(20);

    p2.setName("Harsh");
    p2.setAge(22);

    if (p1.getAge() > p2.getAge())
        p1.display();
    else
        p2.display();

    return 0;
}