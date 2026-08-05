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

    // Copy constructor (Deep Copy)
    str(const str &obj)
    {
        length = obj.length;
        A = new char[length + 1];
        strcpy(A, obj.A);
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
    char s[100];

    cout << "Enter a string: ";
    cin.getline(s, 100);

    str obj1(s);      // Dynamic constructor
    str obj2 = obj1;  // Copy constructor

    cout << "\nObject 1:" << endl;
    obj1.display();

    cout << "\nObject 2:" << endl;
    obj2.display();

    return 0;
}