// Q: Base class functions are declared as pure virtual functions.....
#include<iostream>
using namespace std;

class Person
{
public:
	virtual void Set(string,int)=0; //pure virtual function
	virtual void Introduce()=0; //pure virtual function
	
};
class Student:public Person
{
public:
	int Sage;
	string Sname; //according to suggestion data-type is int,I've used string

	void Set(string name,int age)
	{
		Sage=age;
		Sname=name;
	}
	void Introduce() 
	{
		cout<<"Student: "<<endl;
	}
	void displayStudent()
	{
		cout<<Sname<<" "<<Sage<<endl<<endl;
	}
	
};

class Teacher:public Person
{
public:
	int Tage;
	string Tname;

	void Set(string name,int age)
	{
		Tage=age;
		Tname=name;
	}

	void Introduce()
	{
		cout<<"Teacher: "<<endl;
	}

	void DisplayTeacher()
	{
		cout<<Tname<<" "<<Tage<<endl<<endl;
	}
	
};

int main()
{
	Student ob1;
	ob1.Set("Nayeem",21);
	ob1.Introduce();
	ob1.displayStudent();


	Teacher ob2;
	ob2.Set("Shikkhok",40);
	ob2.Introduce();
	ob2.DisplayTeacher();
}