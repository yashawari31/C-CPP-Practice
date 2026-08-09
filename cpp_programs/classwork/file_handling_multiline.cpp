#include<iostream>
#include<fstream>

int main()
{
    std::ofstream file_write;

    file_write.open("Jon Snow.txt");

    file_write<<"WE Know no KING\n";
    file_write<<"But the KING IN THE NORTH\n";
    file_write<<"Whose name is Jon Snow!";

    file_write.close();

    std::ifstream multi_line_read;
    multi_line_read.open("Jon Snow.txt");

    std::string read;
    
    //multi line reading
    while(getline(multi_line_read,read))
    {
        std::cout<<read<<std::endl;
    }
    return 0;
}