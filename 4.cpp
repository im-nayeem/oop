//Q: create 3 obj ob1,ob2,ob3......
#include<iostream>
using namespace std;
class Subject
{
public:
	int mark1,mark2;

	Subject()
	{
		cout<<"Default Constructor"<<endl;
	}
	Subject(int mark1,int mark2)
	{
		this->mark1=mark1;
		this->mark2=mark2;
	}
	// Subject(Subject ob1,Subject ob2,Subject ob3)
	// {
	// 	mark1 = ob1.mark1+ob2.mark1+ob3.mark1;
	// 	mark2 = ob1.mark2+ob2.mark2+ob3.mark2;
	// }
	

	void display()
	{
		cout<<mark1<<" "<<mark2<<endl<<endl;
	}

	Subject operator+(Subject obj)
	{
		
		return Subject(mark1+obj.mark1,mark2+obj.mark2);
	}
	
};
int main()
{
	Subject ob1(10,9),ob2(9,8),ob3(6,10);

	Subject ob4=ob1+ob2+ob3;

	ob1.display();
	ob2.display();
	ob3.display();
	ob4.display();

	return 0;
}
