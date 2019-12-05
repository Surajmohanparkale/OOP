#include <iostream>

using namespace std;
class studinfo;
class student
{
    string name;
    string cls;
    char* div;
    string dob;
    string blood_gr;
    static int count;
public:
    int roll_no;
    student()
    {

        name=" ";
        roll_no = 0;
        cls = "";
        div = new char;
        dob = "dd/mm/yyyy";
        blood_gr = " ";
    }
    ~student()
    {
        delete div;

    }
    static int getcount()
    {
        return count;
    }
    void getData(studinfo*);
    void dispData(studinfo*);

};

class studinfo
{
    string address;
    long long int *mobno;
    long long int *dlno;
    friend class student;
public:
    studinfo()
    {

        address = " ";
        mobno = new long long int;
        dlno = new long long int;
    }
    ~studinfo()
    {
     delete mobno;
     delete dlno;
    }
    void getStudData()
    {

        cout<<"Enter Contact Address"<<endl;
        cin.get();
        getline(cin,address);
        while(1)
        {
        cout<<"Enter the Telephone Number"<<endl;
        cin>>*mobno;
        if(((*mobno/100000)>10000) && (*mobno/100000)<=100000)
        {
            break;
        }
        else
        cout<<"Please Enter a valid telephone Number"<<endl;
        }
        cout<<"Enter the Driving License number:"<<endl;
        cin>>*dlno;
    }
    void dispStudData()
    {
        cout<<"Contact Address : "<<address<<endl;
        cout<<"Telephone Number : "<<*mobno<<endl;
        cout<<"Driving License Number : "<<*dlno<<endl;

    }


};

inline void student:: getData(studinfo* st)
{
    cout<<"Enter Student Name: ";
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>roll_no;
    cout<<"Enter Class: ";
    cin.get();
    getline(cin,cls);
    cout<<"Enter the Division: ";
    cin>>div;
    cout<<"Enter the Date of Birth: ";
    cin.get();
    getline(cin,dob);
    cout<<"enter blood group: ";
    t:
  {
    cin>>blood_gr;
    while(1)
    {
      if((blood_gr=="o+")||(blood_gr=="o-")||(blood_gr=="a+")||(blood_gr=="a-")||(blood_gr=="ab+")||(blood_gr=="ab-")||(blood_gr=="b+")||(blood_gr=="b-"))
     {

       break;
     }
     else
        {
     cout<<"invalid! please enter again \n";
     goto t;
     break;
     }
    }
  }
    st->getStudData();
    count++;
    cout<<"Toatal Entries = "<<student::getcount()<<endl;

}


 inline void student::dispData(studinfo* st1)
{

    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll_no<<endl;
    cout<<"Class: "<<cls<<endl;
    cout<<"Division: "<<div<<endl;
    cout<<"Date of Birth: "<<dob<<endl;
    cout<<"Blood Group: "<<blood_gr<<endl;
    st1->dispStudData();

}
int student::count;


int main()
{
    student* a[100];
    studinfo* b[100];
    int n=0,c,i,roll;
while(1)
    {
        cout<<"Enter your choice: "<<endl<<endl;
     cout<<"1.Add Data\n2.Display Data\n3.Delete Data"<<endl<<endl;
     cin>>c;
     cin.get();
     switch(c)
     {
      case 1:
        a[n]=new student;
        b[n]=new studinfo;
        a[n]->getData(b[n]);
        n++;
        cout<<"Data Added Successfully"<<endl<<endl;

      break;

      case 2:
          if(n==0)
          {
              cout<<"DATABASE IS EMPTY"<<endl;
          }
          else
          {

        cout<<"----------------- STUDENT DETAILS ------------------"<<endl;
        for(i=0;i<n;i++)
          {
            cout<<"----------------------------------------------------"<<endl;
            a[i]->dispData(b[i]);
            cout<<endl<<endl;
          }
          }
      break;

      case 3:
            if(n<1)
            {
              cout<<"DATABASE IS EMPTY"<<endl;
            }
            else
            {

            cout<<"Enter the Roll number of Student to be Deleted"<<endl;
            cin>>roll;
            for(i=0;i<n;i++)
            {
                if(a[i]->roll_no == roll)
                {
                    while(i<n-1)
                    {
                     a[i] = a[i+1];
                     b[i] = b[i+1];
                     i++;
                      break;
                    }
                    n--;

                }
                else
                {
                    cout<<"RECORD  DOES NOT EXIST"<<endl;
                }
            }
            cout<<"Data Deleted Successfully"<<endl<<endl;
            }
            break;
     }
    }
    return 0;
}
