//Q: Declare address class inside the student class
#include<iostream>
using namespace std;
class Student
{
	int Sage;
	string Sname; //according to suggestion data-type is int,I've used string
public:
	void Set1(string name,int age)
	{
		Sname=name;
		Sage=age;
	}
	

	class Address
		{
		public:
			int houseNumber;
			string countryName;

			void Set1(string cName,int houseNo)
			{
				countryName=cName;
				houseNumber=houseNo;
			}
			void displayStudent()
			{
				cout<<countryName<<" "<<houseNumber<<" "<<endl<<endl;
			}
			
		};	
	Address x;
	void displayStudent()
	{
		cout<<Sname<<" "<<Sage<<endl<<x.countryName<<" "<<x.houseNumber<<endl;
	}
};
int main()
{
	

	Student::Address obj;
	obj.Set1("BD",202);
	obj.displayStudent();

	
	Student ob;
	ob.Set1("Nayeem",21);
	ob.x.Set1("BD",203);
	ob.displayStudent();
	
	return 0;
}