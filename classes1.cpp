#include<iostream>
#include<string>
using namespace std;
class class2;
class class1{
  
  int value1;
  public:
   class1(int i)
   {
     value1=i;
   }
   void display(void)
   {
     cout<<" Value1 of class 1  "<<value1<<endl;
   }friend void exchange(class1 &, class2 &);
};
class class2
{
  int value2;
  public:
  class2(int i)
  {
    value2=i;
  }
  void display(void)
  {
   cout<<"Value2 of class 2   "<<value2<<endl;
  }friend void exchange(class1 &,class2 &);

};
void exchange(class1 &x, class2 &y )
{
 int t=x.value1;
 x.value1=y.value2;
 y.value2=t;

}
int main()
{
  class1 c1(100);
  class2 c2(200);
  cout<<"value after exchange "<<endl;
  c1.display();
  c2.display();
  exchange(c1,c2);
  cout<<"Value after exchange  "<<endl;
  c1.display();
  c2.display();
  return 0;
}
