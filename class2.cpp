#include<iostream>
using namespace std;
class base{
 public:
  int x;
  static int y;
};
int base::y;
int main()
{
 base b1,b2;
 b1.x=10;
 b1.y=19;
 b2.x=34;
 b2.y=56;
 cout<<b1.x<<endl;
 cout<<b1.y<<endl;
 cout<<b2.x<<endl;
 cout<<b2.y<<endl;
 return 0;
}
