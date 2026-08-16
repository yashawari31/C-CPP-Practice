#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int numA;

public:
    void accept()
    {
        cout << "Enter number for Class A: ";
        cin >> numA;
    }

    void display()
    {
        cout << numA;
    }

    friend void swapNumbers(ClassA &, ClassB &);
};

class ClassB
{
private:
    int numB;

public:
    void accept()
    {
        cout << "Enter number for Class B: ";
        cin >> numB;
    }

    void display()
    {
        cout << numB;
    }

    friend void swapNumbers(ClassA &, ClassB &);
};

void swapNumbers(ClassA &a, ClassB &b)
{
    int temp = a.numA;
    a.numA = b.numB;
    b.numB = temp;
}

int main()
{
    ClassA a;
    ClassB b;

    a.accept();
    b.accept();

    cout << "\nBefore swapping:" << endl;
    cout << "Class A = ";
    a.display();

    cout << "\nClass B = ";
    b.display();

    swapNumbers(a, b);

    cout << "\n\nAfter swapping:" << endl;
    cout << "Class A = ";
    a.display();

    cout << "\nClass B = ";
    b.display();

    return 0;
}