#include<iostream>
using namespace std;
class Marks
{
    int mark;
public:
    Marks(int x){
        mark=x;

    }
    void display()
    {
        cout<<mark<<endl;
    }
    void operator()(int x)
    {
        mark=max(mark,x);
    }
    
};
int main()
{
    Marks ob(40);

    ob(30);

    ob.display();

}