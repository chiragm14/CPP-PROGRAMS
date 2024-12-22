#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int num;
    cout<<"ENTER A NUMBER BETWEEN 0 TO 2: ";
    cin>>num;

    switch(num)
    {
        case 0: cout<<"THIS IS CASE 0"<<endl;
                break;

        case 1: cout<<"THIS IS CASE 1"<<endl;
                break;

        case 2:cout<<"THIS IS CASE 2"<<endl;
                break;

        default: cout<<"THIS IS DEFAULT CASE"<<endl;
    

    }

    return 0;

    
}