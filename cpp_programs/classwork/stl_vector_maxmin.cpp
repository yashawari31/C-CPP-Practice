#include<iostream>
#include<vector>
int main()
{
    std::vector<int>v1;

    int size;
    std::cout<<"Enter the no. of elements you want to enter:"<<std::endl;
    std::cin>>size;
    
   
    std::cout<<"Enter vector elements:"<<std::endl;
    int n;
    for(int i=0;i<size;i++)
    {
        std::cin>>n;
        v1.push_back(n);
    }

    int max=v1[0];
    int min=v1[1];

    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]>max)
        {
            max=v1[i];
        }

        if(v1[i]<min)
        {
            min=v1[i];
        }
    }
    std::cout<<"The max element is:"<<max<<std::endl;
     std::cout<<"The min element is:"<<min<<std::endl;
}