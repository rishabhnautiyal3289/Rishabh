#include<iostream>
using namespace std;
const int size=10;
class safearray{
 int arr[size];
 public:
  safearray(){
    register int i;
    for(i=0;i<size; i++)
    {
     arr[i]=i;
     }
  }
  int &operator[](int i)
 {
   if(i>size)
   {
     cout<<"Index out of bounds"<<endl;
     return arr[0];
   }
   return arr[i];
  } 

};
int main()
{
  safearray A;
  cout<<"Value of A[2]  :"<< A[2]<<endl;
  cout<<"Value of A[5]  :"<< A[5]<<endl;
  cout<<"Value of A[12]  :"<< A[12]<<endl;
return 0;

}
