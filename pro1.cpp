#include<iostream>
#include<string.h>
using namespace std;
class department{
  public:
    string name;
    long sal;
    long int departid;
    int age;
    int bonus;
       void input()
       {
         cout<<"Enter name "<<endl;
         cin>>name;
         cout<<"Enter sal "<<endl;
         cin>>sal;
         cout<<"Enter department id"<<endl;
         cin>>departid;
         cout<<"enter age "<<endl;
         cin>>age;
         cout<<"Enter bonus "<<endl;
         cin>>bonus;
         sal=sal+bonus;
       }

};
class programmer: public department{
  public:
    void display()
    {
      cout<<"name is "<<name<<endl;
      cout<<"salary is "<<sal<<endl;
      cout<<"department id "<<departid<<endl;
      cout<<"Age is "<<age<<endl;
    } 

};
int main()
{
  programmer obj;
  obj.input();
  obj.display();
 return 0;
}
