/*

	- Create a class "Cipher" as a base class 
	- Following are the derived classes: 
			- class Foundation: 
					- "This is a foundation batch" 
			
			- class "JAVA":
					- "This is a Java batch"
					
            - class "DSA": 
					- "This is a DSA batch"

    - Use pure virtual function display() to display contents of each derived class.					

*/
#include<iostream>

class Cipher
{
    public:
    virtual void display()=0;
   
};

class Foundation:public Cipher
{
    public:
    virtual void display()
    {
        std::cout<<"This is a foundation batch"<<std::endl;
    }
};

class JAVA:public Cipher
{
    public:
    virtual void display()
    {
        std::cout<<"This is a Java Batch"<<std::endl;

    }
};

class DSA:public Cipher
{
    public:
    virtual void display()
    {
        std::cout<<"This is a DSA batch"<<std::endl;
    }
};

int main()
{
   JAVA j_stud;
   Cipher &stud=j_stud;
   stud.display();   

   DSA dsa_stud;
   Cipher &stud_dsa=dsa_stud;
   stud_dsa.display();
}