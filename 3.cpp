//Q: Declare display function as friend function
#include<iostream>
using namespace std;
class Human
{
public:
	int age;
	string name;

	void Set(string name,int age)
	{
		this->name=name;
		this->age=age;
	}

	friend void display();
	
};

void display(Human obj)
{
	cout<<"Ami Manush"<<endl<<obj.name<<" "<<obj.age<<endl;
}


int main()
{
	Human obj;
	obj.Set("Nayeem",21);
	display(obj);
}