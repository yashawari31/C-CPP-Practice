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

    void increment(int n)
    {
        dd = dd + n;

        while(dd > 30)
        {
            dd = dd - 30;
            mm++;

            if(mm > 12)
            {
                mm = 1;
                yy++;
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

    cout << "Enter number of days to increment: ";
    cin >> n;

    d.increment(n);

    d.display();

    return 0;
}