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
    int words_cnt=0;
    int char_cnt=0;
    int lines_cnt=0;
    int space_cnt=0;
    //multi line reading
    while(getline(multi_line_read, read))
  {
    lines_cnt++;

    for(int i = 0; i < read.length(); i++)
    {
        char_cnt++;

        if(read[i] == ' ')
        {
            space_cnt++;
            words_cnt++;
        }
    }
 }
 words_cnt++;


 std::cout<<"Total lines in file:\t"<<lines_cnt<<std::endl;
 std::cout<<"Total characters in file:\t"<<char_cnt<<std::endl;
 std::cout<<"Total words in file:\t"<<words_cnt<<std::endl;
 std::cout<<"Total whitespaces in file:\t"<<space_cnt<<std::endl;  
    return 0;
}