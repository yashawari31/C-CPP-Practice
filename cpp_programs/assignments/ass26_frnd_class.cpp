#include <iostream>
using namespace std;

class ClassA
{
private:
    int no1;

public:
    ClassA():no1(0){}
    ClassA(int num):no1(num){}

    friend class ClassB;
};

class ClassB
{
private:
    int no2;

public:
    ClassB():no2(0){}
    ClassB(int num):no2(num){}

    void Display(ClassA &a)
    {
        cout << "Number 1 = " << a.no1 << endl;
        cout << "Number 2 = " << no2 << endl;
        cout << "Addition = " << a.no1 + no2 << endl;
    }
};

int main()
{
    ClassB b(20);

    ClassA a(10);

    b.Display(a);

    return 0;
}