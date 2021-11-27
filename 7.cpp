//Q: overload stream extraction and insertion operator

#include<iostream>
using namespace std;
class Person
{
	string name;
	int age;
public:
	friend istream& operator>>(istream&,Person&);
	friend ostream& operator<<(ostream&,Person&);
	
};
istream& operator>>(istream& in,Person& ob)
{
	in>>ob.name;
	in>>ob.age;

	return in;
}
ostream& operator<<(ostream& out,Person& ob)
{
	out<<"Name: "<<ob.name<<endl<<"Age: "<<ob.age<<endl;

	return out;
}

int main()
{
	Person p;
	cin>>p;
	cout<<p;
	return 0;
}