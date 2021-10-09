#include<iostream>
using namespace std;
class base{
public:
 int x;
static int y;
void printx()
{
    cout<<x<<" "<< y<<endl;
}
void printy()
 {
  cout<<y<<" "<< x<<endl;
  }
};
int base::y;
int main()
{
base b1;
b1.x=10;
base ::y=30;
base b2;
b2.x=100;
b2.y=90;
b1.printx();
b1.printy();
b2.printx();
b2.printy();
return 0;
}


