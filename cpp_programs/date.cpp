#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void modifyDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void show() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d;

    d.setDate(10, 6, 2026);
    d.show();

    d.modifyDate(15, 7, 2026);
    d.show();

    return 0;
}