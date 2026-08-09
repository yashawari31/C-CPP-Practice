#include<iostream>
#include<fstream>

int main()
{
    std::ifstream f1,f2;

    f1.open("student.txt");
    std::string str1;
    getline(f1,str1);
    f1.close();

    f2.open("stu2.txt");
    std::string str2;
    getline(f2,str2);
    f2.close();

    //string comparison
    if(str1==str2)
    {
        std::cout<<"both files contain same data"<<std::endl;
    }
    else{
        std::cout<<"both files contain different data"<<std::endl;
    }
    return 0;
}