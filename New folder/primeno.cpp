#include <iostream>
using namespace std;


bool isPrime(int n){

    for(int i=2;i<n;i++){

        if(n%i==0){
            return 0;
        }        
    }
    return 1;

}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if (isPrime(n))
    {
        cout<<n<<" is a Prime no.";
    }
    else{
    cout<<n<<" is not a Prime No";
    }

    isPrime(n);

    return 0;
}