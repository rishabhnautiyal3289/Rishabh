#include<iostream>
#include<string>
using namespace std;
int main()
{
 int units,cost;
 string st; 
 cout<<"Enter your units"<<endl;
 cin>>units;
 if(units<=100)
 {
   cost=units*60+50;
 }
 else if(units<=300)
 {
  cost=units*80+50; 
  }
  else if(units>=300)
  {
    cost=units*90+50;
  }
  float total_cost;
  if(cost>=300)
  {
    total_cost=0.15*cost+cost;
  }
  cout<<"Your Bill is: "<<total_cost<<endl;
}

