#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
class Employee
{
public:
  int empno;
  char empname[20];

 };
int main()
{
  Employee e;
  fstream f; 
  int eno; 
  char ename[20],c;
  int ch;
  while(1)
  {
   cout<<"\n\n1.Add Records in the File";
   cout<<"\n\n2. Search Record by Employee whose Name is ";
   cout<<"\n\n3. Search Employee whose Name is 'XYZ'";
   cout<<"\n\n4. Display All Records ";
   cout<<"\n\n5.Search Record by Employee Name";
   cout<<"\n\n6.Exit";
   cout<<"\nEnter your choice ";
   cin>>ch;
   switch(ch)
   { 
    case 1:
     f.open("Employee.dat",ios::app|ios::binary);
     while(1)
     {
     cout<<"\nEnter the employee number :";
     cin>>e.empno;
     cout<<"\nEnter employee Name :";
     cin>>e.empname;
     f.write((char *)&e,sizeof(e));
     cout<<"\n\nDo your want to Continue ?(Y/N):";
     cin>>c;
     if(c=='n'|| c=='N')
           break;
     }
     f.close();
     break;
   case 2:
   f.open("Employee.dat",ios::in|ios::binary);
   cout<<"\nEnter Employee No. :";
   cin>>eno;
   while(f.read((char *)&e,sizeof(e)))
   {
     if(eno==e.empno)
      {
     cout<<"\n\t"<<e.empno<<" :"<<e.empname;
        break;
        }
    }
    break;
    case 3:
      f.open("Employee.dat",ios::in|ios::binary);
      while(f.read((char *)&e,sizeof(e)))
       {
          if(strcmp(e.empname,"AYZ")==0)
              {
                   cout<<"\n\t"<<e.empno<<":"<<e.empname;
                      break;
               }

          }
             
        if(strcmp(e.empname,"AYZ")!=0)
         {
            cout<<"\n Employee name does not match\n";
          } 
         f.close();
         break;
    case 4:
       f.open("Employee.dat",ios::in|ios::binary);
       while(f.read((char *)&e,sizeof(e)))
       {
        cout<<"\n\t"<<e.empno<<":"<<e.empname;
          }
      f.close();
      break;
    case 5:
       f.open("Employee.dat",ios::in|ios::binary);
       cout<<"\nEnter Employee Name";
       cin>>ename;
       while(f.read((char *)&e,sizeof(e)))
         {
            if(strcmp(ename,e.name))
                 {
               cout<<"\n\t"<<e.empno<<":"<<e.empname;
                  break;
                     }
             }
       f.close();
       break;
    case 6:
     exit(0);
     break;
    default:
     cout<<"\nInvalid Choice";
     break;
   
   
}



   } 
return 0;

  }
