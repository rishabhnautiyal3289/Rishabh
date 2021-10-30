#include<iostream>
#include<string>
using namespace std;
class check
{
 int age;
 public:
  check(): age(19)
  {}
  void operator +=(int x)
  {
    age = age+x;
  }
  void print()
  {
    cout<<"The incremented age is :"<<age<<endl;
  }
};
int main()
{
  check p;
  p+=3;
  p.print();
  return 0;
}
