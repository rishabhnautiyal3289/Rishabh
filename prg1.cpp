// Rishabh Nautiyal 
// Sec K Stu.id 20011654
#include<iostream>
using namespace std;
int fact(int );
int main()
{
  int n;
  cout<<"Enter the number whose Factorial you want"<<endl;
  cin>>n;
  cout<<"The factorial of "<<n<<" is " << fact(n) <<endl;
  return 0;
}
int fact(int a)
{
  if(a==0)
  {
    return 1;
    }
  else
    return (a*fact(a-1));

  }
