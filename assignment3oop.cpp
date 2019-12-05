#include<iostream>
using namespace std;
#include<conio.h>
class shape
{
 public:
 double x,y;
 virtual void getdata()
 {
 };
 virtual void area()
  {
  	
  }
};

class rectangle:public shape
{
 public:
 double are;
 int aa,bb;
 void getdata()
 {
  cout<<"\nenter the length and bredth : ";
  cin>>aa>>bb;
 }
 void area()
 {
  are=(aa*bb);
 }
 void display()
 {
  cout<<"area of rectangle is : "<<  are;
 }

};
class triangle:public shape
{
 public:
 double are;
 int aa,bb;
 void getdata()
 {
  cout<<"\nenter the base and height of triangle : ";
  cin>>aa>>bb;
 }
 void area()
 {
  are=(0.5*bb*aa);
 }
 void display()
 {
  cout<<"area of triangle is : "<<  are;
 }
};
int main()
{     shape *s;
 
 triangle t;
 rectangle r;
 

 cout<<"\n\n RECTANGLE ........\n\n";
 s=&r;
 s->getdata();
 s->area();
 r.display();

 cout<<"\n\n TRIANGLE .........\n\n";
 s=&t;
 s->getdata();
 s->area();
 t.display();
 getch();
 return 0;
}
