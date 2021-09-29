// Rishabh Nautiyal 
// Sec K Roll no 43
#include<iostream>
using namespace std;
void mat(int , int);
int main()
{
 int rows,column;
 cout<<"Enter number of rows of your matrix"<<endl;
 cin>>rows;
 cout<<"Enter number of column of your matrix"<<endl;
 cin>>column;
 mat(rows,column);
}
void mat(int a,int b)
{
  int i,j;
  int arr[10][10];
  cout<<"Enter the elements of your matrix"<<endl;
  for(i=0;i<b;i++){
   for(j=0;j<a;j++)
   {
    cin>>arr[i][j];
   }
   }
   for(i=0;i<b;i++){
    for(j=0;j<a;j++)
    {
    cout<<" "<<arr[i][j];
    }
    cout<<endl;
    }
}
