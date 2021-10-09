#include<iostream>
using namespace std;
class sample{
 int m;
 void read(void);
 public:
  void update(void);
  void write(void);
};
 void sample::read(void)
 {
   cout<<"Rishabh";
 }
 void sample::update(void)
 {
  read();
 }
int main()
{
 sample s;
 s.update();
}
