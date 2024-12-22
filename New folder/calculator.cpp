#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    char op;
    cout<<"Enter Operator: ";
    cin>>op;

    switch(op)
    {
        case '+': cout<<a<<" + "<<b<<" is "<<(a+b)<<endl;
                break;

        case '-': cout<<a<<" - "<<b<<" is "<<(a-b)<<endl;
                break;

        case '*' :cout<<a<<" * "<<b<<" is "<<(a*b)<<endl;
                break;

        case '/' :cout<<a<<" / "<<b<<" is "<<(a/b)<<endl;
                break;

        case '%' :cout<<a<<" % "<<b<<" is "<<(a%b)<<endl;
                break;

        // default: cout<<"THIS IS DEFAULT CASE"<<endl;
    

    }

    return 0;

    
}