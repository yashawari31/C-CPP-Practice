#include <iostream>
#include <cstring>
using namespace std;

class str
{
    char *A;
    int length;

public:
    // Dynamic constructor
    str(const char *s)
    {
        length = strlen(s);
        A = new char[length + 1];
        strcpy(A, s);
    }

    // Constructor for creating an empty object
    str()
    {
        A = NULL;
        length = 0;
    }

    // Function to add two objects
    void add(str &obj1, str &obj2)
    {
        length = obj1.length + obj2.length;
        A = new char[length + 1];

        strcpy(A, obj1.A);
        strcat(A, obj2.A);
    }

    // Display function
    void display()
    {
        cout << "String: " << A << endl;
        cout << "Length: " << length << endl;
    }

    // Destructor
    ~str()
    {
        delete[] A;
    }
};

int main()
{
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    str obj1(s1);
    str obj2(s2);
    str obj3;

    obj3.add(obj1, obj2);

    cout << "\nFirst Object:" << endl;
    obj1.display();

    cout << "\nSecond Object:" << endl;
    obj2.display();

    cout << "\nThird Object (Concatenated):" << endl;
    obj3.display();

    return 0;
}