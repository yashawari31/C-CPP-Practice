#include<iostream>
#include<fstream>

int main(){

std::ifstream f1;
f1.open("student.txt");
std::string str;
getline(f1,str);
f1.close();

std::fstream f2;
f2.open("stu2.txt");

f2 << str;

f2.close();


return 0;
}
