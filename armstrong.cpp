#include<iostream>
using namespace std;
void ams(int );
int main()
{
 int n;
 cout<<"Enter the number you want to check"<<endl;
 cin>>n;
 ams(n);
 return 0;
}
void ams(int a)
{
  int c,sum=0;
  int temp=a;
  while(temp!=0) 
 {
    c=temp%10;
    sum=sum+(c*c*c);
    temp=temp/10;
   }
   if(sum==a)
      cout<<"The number is a armstrong number  "<<a<<endl;
   else
      cout<<"The number is not a armstrong number  "<<a<<endl;
}

