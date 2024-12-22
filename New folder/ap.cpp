#include <iostream>
using namespace std;

int ap(int n){

    int ap = 3*n+7;

    return ap;

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Answer is "<<ap(n);


    return 0;
}