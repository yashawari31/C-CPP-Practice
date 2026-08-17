#include <iostream>
using namespace std;

class Matrix
{
private:
    int *ptr;
    int row;
    int column;

public:

    // Constructor
    Matrix(int r, int c)
    {
        row = r;
        column = c;

        ptr = new int[row * column];
    }

    // Accept matrix elements
    friend istream& operator>>(istream &in, Matrix &m);

    // Display matrix elements
    friend ostream& operator<<(ostream &out, Matrix &m);

    // Destructor
    ~Matrix()
    {
        delete[] ptr;
    }
};


// >> operator
istream& operator>>(istream &in, Matrix &m)
{
    cout << "Enter matrix elements:\n";

    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.column; j++)
        {
            in >> m.ptr[i * m.column + j];
        }
    }

    return in;
}


// << operator
ostream& operator<<(ostream &out, Matrix &m)
{
    cout << "\nMatrix:\n";

    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.column; j++)
        {
            out << m.ptr[i * m.column + j] << " ";
        }

        out << endl;
    }

    return out;
}


int main()
{
    int row, column;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> column;

    Matrix m(row, column);

    cin >> m;

    cout << m;

    return 0;
}