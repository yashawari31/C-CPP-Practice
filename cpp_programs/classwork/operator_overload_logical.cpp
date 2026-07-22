#include<iostream>

class Logical
{
  int num;
  public:
  Logical():num(0){}
  Logical(int n):num(n){}

  bool operator &&(Logical & L)
  {
    return(num&&L.num);
  }
  bool operator ||(Logical & L)
  {
    return(num||L.num);
  }
  bool operator !()
  {
    return(!num);
  }


};

int main()
{
  Logical L1(-2);
  Logical L2(4);
 bool res=L1||L2;
 std::cout<<res;

 return 0;

}
