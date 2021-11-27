<h2>Problem: <b>Operator overloading using friend function and short hand</b> </h2>

```c++
#include<iostream>
using namespace std;
class Add{
    int mark1;
public:
    Add(){}
    Add(int a){
        mark1=a;
    }
    void display(){
        cout<<mark1<<endl;
    }
    Add friend operator+=(Add &a, int b);
    Add friend operator-=(Add &a, int b);
    Add friend operator*=(Add &a, int b);
    Add friend operator/=(Add &a, int b);
};
Add operator+=(Add &a,int b){
    a.mark1+=b;
    return a;
}

Add operator-=(Add &a,int b){
    a.mark1-=b;
    return a;
}
Add operator*=(Add &a,int b){
    a.mark1*=b;
    return a;
}
Add operator/=(Add &a,int b){
    a.mark1/=b;
    return a;
}
int main()
{
    Add a(1),c;
    a+=20;
    a.display();
    a-=10;
    a.display();
    a/=7;
    a.display();
}
```