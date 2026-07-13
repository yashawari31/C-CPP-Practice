#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Enter Hours Minutes Seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if(seconds >= 60)
        {
            minutes += seconds / 60;
            seconds %= 60;
        }

        if(minutes >= 60)
        {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

    void display()
    {
        cout << "Time = " << hours << " : "
             << minutes << " : "
             << seconds << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter First Time\n";
    t1.accept();

    cout << "Enter Second Time\n";
    t2.accept();

    t3.add(t1, t2);

    cout << "\nResultant Time\n";
    t3.display();

    return 0;
}