#include <iostream>
using namespace std;

class Employee {
private:
    int id, exp;
    string name;
    float basic, da, hra, bonus, gross;

public:
    // SETTERS
    void setId(int i) { id = i; }
    void setName(string n) { name = n; }
    void setBasic(float b) { basic = b; }
    void setExp(int e) { exp = e; }

    // GETTER
    float getGross() { return gross; }

    // FUNCTIONS
    void calculateDA() { da = 0.10 * basic; }
    void calculateHRA() { hra = 0.20 * basic; }

    void calculateBonus() {
        if (exp >= 5) bonus = 0.20 * basic;
        else if (exp >= 2) bonus = 0.10 * basic;
        else bonus = 0.05 * basic;
    }

    void calculateGross() {
        gross = basic + da + hra + bonus;
    }

    void display() {
        cout << name << " Gross Salary: " << gross << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.setId(1);
    e1.setName("Yash");
    e1.setBasic(50000);
    e1.setExp(3);

    e2.setId(2);
    e2.setName("Harsh");
    e2.setBasic(60000);
    e2.setExp(6);

    e1.calculateDA();
    e1.calculateHRA();
    e1.calculateBonus();
    e1.calculateGross();

    e2.calculateDA();
    e2.calculateHRA();
    e2.calculateBonus();
    e2.calculateGross();

    if (e1.getGross() > e2.getGross())
        e1.display();
    else
        e2.display();

    return 0;
}