#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
fstream f;
f.open("Info.txt",ios::out);
if(!f)
{
cout<<"Enter the opening file";
return 0;
}
cout<<"file name Info.txt created !!!"<<endl;
f<<"Name- Suraj, SY-BTECH Computer A , batch A-2,  VIIT pune "<<endl;
f.close();
f.open("Info.txt",ios::in);
if(!f)
{
cout<<"Error opening file"<<endl;
return 0;
}
while(!f.eof())
{
f>>ch;
cout<<ch;
}
f.close();;
return 0;
}
