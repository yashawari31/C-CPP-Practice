#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number():num(0){}
    Number(int n):num(n){}

    void display()
    {
        cout << num << endl;
    }

    friend void operator-(Number &n);
};

void operator-(Number &n)
{
    n.num = -n.num;
}

int main()
{
    Number n(10);

    cout << "Before negation: ";
    n.display();

    -n;

    cout << "After negation: ";
    n.display();

    return 0;
}