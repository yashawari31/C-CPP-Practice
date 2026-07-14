#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    inline void setValue(int x)
    {
        n = x;
    }

    void prime()
    {
        int i, flag = 1;

        if(n <= 1)
        {
            cout << n << " is not a Prime Number\n";
            return;
        }

        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            cout << n << " is a Prime Number\n";
        else
            cout << n << " is not a Prime Number\n";
    }

    void armstrong()
    {
        int temp = n, rem, sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == n)
            cout << n << " is an Armstrong Number\n";
        else
            cout << n << " is not an Armstrong Number\n";
    }

    void factorial()
    {
        int i;
        long long fact = 1;

        for(i = 1; i <= n; i++)
            fact *= i;

        cout << "Factorial = " << fact << endl;
    }
};

int main()
{
    Number obj;
    int choice, num;

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Prime Number\n";
        cout << "2. Armstrong Number\n";
        cout << "3. Factorial\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 3)
        {
            cout << "Enter Number: ";
            cin >> num;
            obj.setValue(num);
        }

        switch(choice)
        {
            case 1:
                obj.prime();
                break;

            case 2:
                obj.armstrong();
                break;

            case 3:
                obj.factorial();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}