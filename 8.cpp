#include<iostream>
#include <string>
#include<sstream>
using namespace std;

int main()
{
    string s="I'm Nayeem from CoU";

    stringstream stream(s);
    // stream<<s;
    string temp;
    while(stream>>temp)
        cout<<temp<<endl;  


    return 0;
}