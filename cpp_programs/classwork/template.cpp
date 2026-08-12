#include<iostream>

template <class B>

B compare(B first,B second)
{
    if(first>second)
       return first;
    else
       return second;   
}

template<class bahubali>

bahubali swap(bahubali &value1,bahubali &value2)
{
    bahubali temp;
    temp=value1;
    value1=value2;
    value2=temp;

}

template<class Bubble>

Bubble sort(Bubble *sorted, Bubble n)
{
    Bubble temp;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n-i-1;j++)
    {
        if(sorted[j]>sorted[j+1])
        {
           temp=sorted[j];
           sorted[j]=sorted[j+1];
           sorted[j+1]=temp;
        }
    }
  }
}

int main()
{
    int a=10;
    int b=17;
    std::cout<<"The greater number is:"<<compare(a,b)<<std::endl;

    swap(a,b);
    std::cout<<"Value after swapping a="<<a<<"\nb="<<b<<std::endl;

    int arr[5];
    std::cout<<"enter array elements:\n";
    for(int i=0;i<5;i++)
    {
      std::cin>>arr[i];
    }

    sort(arr,5);
    std::cout<<"Elements after swapping"<<std::endl;
    for(int i=0;i<5;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }


}