#include <iostream>
#include<vector>													//function to include vector class
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void display(vector<int> &v)										//function to display the vector				
{
	int i;
	cout<<"(";
	for( i=0; i<v.size()-1; i++)
	{
		cout<<v[i]<<",";
	}
	cout<<v[i]<<")";
}

int main()
{
	//create a vector
	vector<int> v;													//vector object 'v' is created
	
	cout<<"Initial size of vector :"<<v.size()<<"\n";
	cout<<"\nLet us create a vector";
	int v_elements, v_size, v_ins_pos, v_mod_position, v_scalar, b, a;
	cout<<"\nEnter size of vector :  ";
	cin>>v_size;
	cout<<"\nEnter "<<v_size<<" elements :\n";
	for(int i=0; i<v_size; i++)
	{
		cin>>v_elements;
		v.push_back(v_elements);									//function to add elements in the vector
	}
	cout<<"\nVector is created and the elements in the vector are : ";
	display(v);
	
	cout<<" \n\nIterator created : ";
	vector<int>::iterator itr1=v.begin();							//iterator pointing to the first element is created
	cout<<"\n\nNow, Let us insert an element in the vector";
	cout<<"\nEnter the position you want to insert element at : ";
	cin>>v_ins_pos;
	itr1=itr1+v_ins_pos-1;											//iterator now points to the specific position as given by the user
	cout<<"\nEnter element to be inserted : ";
	cin>>b;
	v.insert(itr1,1,b);												//function to insert an element in vector
	cout<<"\nAfter inserting "<<b<<" ,the new vector is : ";
	display(v);
	
	
	//modify the value of a given element
	cout<<"\n\nNext is to modify an element in the vector";
	cout<<"\nEnter position you want to modify : ";
	cin>>v_mod_position;
	vector<int>::iterator itr2=v.begin();
	itr2=itr2+v_mod_position-1;
	v.erase(itr2);													//function to delete an element from vector
	cout<<"\nEnter modified element : ";
	cin>>a;
	v.insert(itr2,1,a);
	cout<<"\nAfter modifying "<<a<<" ,the new vector is : ";
	display(v);
	
	
	//multiply the vector by a scalar quantity
	cout<<"\n\nlet us multiply the vector by a scalar quantity";
	cout<<"\nEnter scalar quantity : ";
	cin>>v_scalar;
	vector<int>::iterator itr3=v.begin();
	for(int i=0; i<=v_size;i++)
	{
		v[i]=v[i]*v_scalar;
	}
	cout<<"\nAfter multiplying by "<<v_scalar<<" ,the new vector is : ";
	display(v);
	
	return 0;
}


