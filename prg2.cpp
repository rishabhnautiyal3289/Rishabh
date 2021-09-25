// Rishabh Nautiyal 
// Sec K Stu.id 20011654
#include<iostream>
using namespace std;
float area(int , int );
float area(int );
float area(float);
int main()
{
  int l,b,a;
  float r;
  // RECTANGLE
  cout<<"Enter dimensions of rectangle"<<endl;
  cin>>l>>b;
  cout<<"The area of rectangle is : "<<area(l,b)<<endl;
  // SQUARE
  cout<<"Enter the side of square : ";
  cin>>a;
  cout<<"The area of square is : "<<area(a)<<endl;
  // CIRCLE
  cout<<"Enter the radius of square : ";
  cin>>r;
  cout<<"The area of the circle is : "<<area(r)<<endl;
  }
float area(int l,int b)
{
  return l*b;
}
float area(int a)
{
  return a*a;
}
float area(float r)
{
  return (3.14*r*r);
}
