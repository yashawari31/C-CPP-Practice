#include <iostream>
using namespace std;

class item
{
private:
    int itemID;
    int quantity;
    float pricePerUnit;
    float amount;

public:
    void accept()
    {
        cout << "Enter Item ID: ";
        cin >> itemID;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;
    }

    void cal()
    {
        amount = quantity * pricePerUnit;

        if (amount > 500)
        {
            cout << "Amount = " << amount << endl;
        }
    }

    void display()
    {
        cout << "\nItem ID: " << itemID << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price Per Unit: " << pricePerUnit << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main()
{
    item i;

    i.accept();
    i.cal();
    i.display();

    return 0;
}