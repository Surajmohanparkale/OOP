#include<iostream>
using namespace std;
 
class A
{
	int a,b;
	public:
		A(){};
		A(int i,int j)
		{
			a=i;
			b=j;
			
		}
		void show()
		{
			cout<<a<<"+i"<<b;
		}
		A operator +(A);
};
A A::operator +(A obj)
{
	A temp;
	temp.a=a+obj.a;
	temp.b=b+obj.b;
	return(temp);
}
int main()
{
	
	int a1,b1,a2,b2;
	cout<<"Enter real and imaginary part for 1st expression\n";
	cin>>a1>>b1;
	cout<<"Enter real and imaginary part for 2nd expression\n";
	cin>>a2>>b2;
	
	
	
	A c1(a1,b1),c2(a2,b2),c3;
	cout<<"The 1st no. is:";
	c1.show();
	cout<<"\nThe 2nd no. is:";
	c2.show();
	c3=c1+c2;     ////// c3=c1.operator(c2)
	cout<<"\nSum is:";
	c3.show();
}
