#include<iostream>
 class IntArray
 {
    int *p;
    int size;

    public:
     IntArray(int s)//parameterised constructor
     {
      size=s;
      p=new int[s];
     }

     void accept()
     {
     std::cout<<"enter array elements"<<std::endl;
     for(int i=0;i<size;i++)
     {
        std::cin>>p[i];
     }
     }
     void display()
     {
      std::cout<<"the array elements are:"<<std::endl;
      for(int i=0;i<size;i++)
      {
        std::cout<<p[i]<<std::endl;
      }
     }
       ~IntArray()//destructor called
       {
         std::cout<<"destructor invoked"<<std::endl;
         delete []p;
       }
 };

  int main()
  {
   IntArray *a=new IntArray(4);
   a->accept();
   a->display();
   delete a;
   return 0;
  }