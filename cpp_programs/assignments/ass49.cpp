#include <iostream>
using namespace std;

template <class T>
class Container
{
private:
    T value;

public:
    Container(T value):value(value){}
    

    T getValue()
    {
        return value;
    }
};

int main()
{
    Container<int> c1(10);
    Container<float> c2(10.5);
    Container<string> c3("Hello");

    cout << "Integer Value : " << c1.getValue() << endl;
    cout << "Float Value   : " << c2.getValue() << endl;
    cout << "String Value  : " << c3.getValue() << endl;

    return 0;
}