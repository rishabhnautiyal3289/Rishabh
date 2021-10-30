#include<iostream>
using namespace std;
class check{
    int length;
    int breath;
    int height;
    public:
    static int c;
    check(double length=2.0,double breath=2.0 ,double height=2.0 )
    {
      this->length=length;
      this->breath=breath;
      this->height=height;
      c++;
    }
    
    void print()
    {
      cout<<"The program is called :"<<c<<"  times"<<endl;
    }
    static int getc()
    { 
      return c;
    }

};
int check::c=0;

int main()
{
  check p1(1.1,2.1,3.1);
  check p2(4.1,5.1,6.1);
  check p3(7.1,8.1,9.1);
  cout<<check::getc()<<endl;
  return 0;


}
