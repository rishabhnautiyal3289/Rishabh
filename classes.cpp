#include<iostream>
#include<string>
using namespace std;
class Box{
    private:
      int length;
      int width;
      int height;
    public:
      Box()
      {length=width=height=0;
      
        }
      Box(int l,int w, int h )
      {
      length=l;
      width=w;
      height=h;
      }
      friend int volume(Box);
 
};
int volume(Box b)
{
  return (b.length*b.width*b.height);

}
int main()
{
  Box b1;
  Box b2(5,6,7);
  cout<<"Volume of Box1  "<<volume(b1)<<endl;
  cout<<"Volume of Box2  "<<volume(b2)<<endl;
  return 0;
}
