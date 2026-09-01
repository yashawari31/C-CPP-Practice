/*

	- Write a C++ program which demonstrates runtime and compile time ploymorphism 
	- Runtime Polymorphism: 
		- Create a base class calculator with a pure virtual function calcualate()
		- Derive two classes : "BasicCalculator" (performed arithmetic operations)
							   "MatrixCalculator" (add two 2*2 matrices)
							   
	- Compiletime Polymorphism: 
        - Create class Arithmetic with overloaded add() functions (one for integer and one for double)	
		- Create a Matrix class with overloaded operator + to add two 2*2 Matrices
		
	- Provide a menu to choose BasicCalculator and MatrixCalculator

*/

#include<iostream>

class Calculator
{
    public:
    virtual void calculate()=0;

    virtual ~Calculator(){}
};

class BasicCalculator: public Calculator
{
    public:
    virtual void calculate()
    {
        double a,b;
        int choice;
        std::cout<<"Enter the two Numbers for Calculation: \n"<<std::endl;
        std::cin>>a>>b;

        std::cout<<"============BASIC CALCULATOR=============="<<std::endl;
        std::cout<<"Enter the choice of Calculation:\n";
        std::cout<<"1.Addition"<<std::endl;
        std::cout<<"2.substraction"<<std::endl;
        std::cout<<"3.Multiplication"<<std::endl;
        std::cout<<"4.Division"<<std::endl;
        std::cout<<"0.Exit"<<std::endl;
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            std::cout<<"Addition of two numbers: "<<a+b<<std::endl;
            break;
        
        case 2:
            std::cout<<"Substraction of two numbers: "<<a-b<<std::endl;
            break;

        case 3:
            std::cout<<"Multiplication of two numbers: "<<a*b<<std::endl;
            break;

        case 4:
            if(b!=0)
            {
              std::cout<<"Division of two numbers: "<<a/b<<std::endl;
              break;    
            }
            else{
                std::cout<<"Undefined"<<std::endl;
                break;
            }

        case 0:
            return;

        default:
            std::cout<<"Invalid Input"<<std::endl;
            break;
        }
    }
};

class MatrixCalculator: public Calculator
{
    public:
    virtual void calculate()
    {
        double m1[2][2];
        double m2[2][2];

        std::cout<<"Enter First Matrix Elements:\n";
        for(int i=0;i<2;i++)
        {
          for(int j=0;j<2;j++)
          {
             std::cin>>m1[i][j];
          }
            
        }

        std::cout<<"Enter Second Matrix Elements:\n";
        for(int i=0;i<2;i++)
        {
          for(int j=0;j<2;j++)
          {
             std::cin>>m2[i][j];
          }
            
        }

        std::cout<<"The Addition of Two Matrices is:\n";
        for(int i=0;i<2;i++)
        {
          for(int j=0;j<2;j++)
          {
             std::cout<<m1[i][j]+m2[i][j]<<std::endl;
          }
            
        }
    }
};

class Arithmetic
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

class Matrix
{
private:
    int mat[2][2];

public:
    Matrix()
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            mat[i][j] = 0;
        }
    }
}    

    void accept()
    {
        std::cout << "Enter 2x2 matrix:" << std::endl;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                std::cin >> mat[i][j];
            }
        }
    }

    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                std::cout << mat[i][j] << " ";
            }

            std::cout << std::endl;
        }
    }

    Matrix operator+(Matrix &m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }

        return temp;
    }
};

int main()
{
    Arithmetic a;

   std:: cout << "Integer Addition: "
         << a.add(10, 20) << std::endl;

    std::cout << "Double Addition: "
         << a.add(10.5, 20.5) << std::endl;
    Matrix m1, m2, m3;

    std::cout << "Enter first matrix:\n";
    m1.accept();

    std::cout << "Enter second matrix:\n";
    m2.accept();

    m3 = m1 + m2;

    std::cout << "\nResult:\n";
    m3.display();
    int choice;

while(1)
{
    std::cout << "\n============================" << std::endl;
    std::cout << "        CALCULATOR" << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "1. Basic Calculator" << std::endl;
    std::cout << "2. Matrix Calculator" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    Calculator *c = NULL;

    switch(choice)
    {
        case 1:
            c = new BasicCalculator();
            break;

        case 2:
            c = new MatrixCalculator();
            break;

        case 3:
            std::cout << "Exiting..." << std::endl;
            return 0;

        default:
            std::cout << "Invalid Input!!" << std::endl;
            break;
    }

    if(c != NULL)
    {
        c->calculate();

        delete c;
        c = NULL;
    }
}
    return 0;
}