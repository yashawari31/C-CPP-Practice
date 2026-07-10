#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void accept()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }

    void compare(Person p)
    {
        if(age > p.age)
            display();
        else
            p.display();
    }
};

int main()
{
    Person p1, p2;

    cout << "Enter details of Person 1\n";
    p1.accept();

    cout << "\nEnter details of Person 2\n";
    p2.accept();

    cout << "\nElder Person Details:\n";
    p1.compare(p2);

    return 0;
}