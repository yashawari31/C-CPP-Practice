#include <iostream>
using namespace std;

class Date
{
private:
    int dd, mm, yy;

public:
    void accept()
    {
        cout << "Enter Date (dd mm yyyy): ";
        cin >> dd >> mm >> yy;
    }

    void decrement(int n)
    {
        dd = dd - n;

        while(dd <= 0)
        {
            dd = dd + 30;
            mm--;

            if(mm < 1)
            {
                mm = 12;
                yy--;
            }
        }
    }

    void display()
    {
        cout << "Updated Date: ";
        cout << dd << "/" << mm << "/" << yy << endl;
    }
};

int main()
{
    Date d;
    int n;

    d.accept();

    cout << "Enter number of days to decrement: ";
    cin >> n;

    d.decrement(n);

    d.display();

    return 0;
}