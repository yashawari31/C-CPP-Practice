#include <iostream>
using namespace std;

class Item
{
private:
    int itemNo;
    char itemName[50];
    int quantity;
    float pricePerUnit;
    float amount;

public:
    void accept();
    void calculate();
    void display();
};

inline void Item::accept()
{
    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Item Name: ";
    cin >> itemName;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price Per Unit: ";
    cin >> pricePerUnit;
}

inline void Item::calculate()
{
    amount = quantity * pricePerUnit;
}

inline void Item::display()
{
    if (amount > 500)
    {
        cout << "\nItem Number: " << itemNo << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price Per Unit: " << pricePerUnit << endl;
        cout << "Amount: " << amount << endl;
    }
    else
    {
        cout << "\nAmount is less than or equal to 500." << endl;
    }
}

int main()
{
    Item i;

    i.accept();
    i.calculate();
    i.display();

    return 0;
}