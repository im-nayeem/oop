//Q:overload the operator using friend function and shorthand operator

#include<iostream>
using namespace std;
class Marks
{
	int mark;
public:
	Marks(){}
	Marks(int mark)
	{
		this->mark=mark;
	}

	void display()
	{
		cout<<mark<<endl;
	}

	friend void operator+=(Marks&,int);
	friend void operator-=(Marks&,int);
};

void operator+=(Marks& obj,int x)
{
	obj.mark=obj.mark+x;
}
void operator-=(Marks& obj,int x)
{
	obj.mark=obj.mark-x;
}

int main()
{
	Marks obj(70);

	obj+=20;
	obj.display();

	obj-=10;
	obj.display();


	return 0;
}