#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<endl;

    cout<<"Printing Fibonacci Series:"<<endl;

    int a=0;
    int b=1;

    //Printing first and second of fibonacci series
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){

        int nextNumber=a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }

    cout<<endl;

}