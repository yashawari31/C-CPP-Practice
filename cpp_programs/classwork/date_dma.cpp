#include<iostream>
 class date
 {
    int day;
    int month;
    int year;

    public:
    date()//default constructor
    {
        day=0;
        month=0;
        year=0;
    }
    date(int _day,int _mnth,int _yr)//parameterised constructor
    {
        day=_day;
        month=_mnth;
        year=_yr;
    }
    ~date()//destructor 
    {
        std::cout<<"destructor invoked";
    }
   void display()
   {
    std::cout<<"the date is:";
    std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
   }
   void accept()
   {
    std::cout<<"enter date"<<std::endl;
    std::cin>>day>>month>>year;

   }
    
 };

 int main()
 {
    date *d1=new date;
    date *d2=new date(2,3,2002);
    d1->display();
    d2->display();
    date d3[4];
     for(int i=0;i<3;i++)
     {
        d3[i].accept();
     }

     for(int i=0;i<3;i++)
     {
        d3[i].display();
     }
    delete d1;
    delete d2;
    delete d3;

    return 0;
 }

 