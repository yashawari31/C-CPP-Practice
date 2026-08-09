#include<iostream>
#include<fstream>

std::ofstream f1;
std::ifstream f2;
int main(){

f1.open("student.txt");
f1<<"cipher academy";
f1.close();

f2.open("student.txt");
std::string str;
getline(f2,str);
std::cout<<str;
f2.close();
return 0;
}