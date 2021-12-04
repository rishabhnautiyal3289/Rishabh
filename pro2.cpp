#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class animal{
  protected:
    string type;
    string color;
    int quantity;
    string gender;
    void inputd()
     {
       cout<<"Enter Type "<<endl;
       cin>>type;
       cout<<"Enter color "<<endl;
       cin>>color;
       cout<<"Enter quantity "<<endl;
       cin>>quantity;
       cout<<"Enter gender  "<<endl;
       cin>>gender;
     }
    void protectsleep()
    {
      cout<<"I'm an animal "<<endl;
    }
};
class zoo:public animal
{ public:
  void input()
  {
    inputd();
  }
  void sleeppattern()
  {
   cout<<"I am animal who is sheep "<<endl;
  }
  
};
int main()
{
  zoo sleep;
  sleep.input();
  sleep.sleeppattern();
  return 0;
}
