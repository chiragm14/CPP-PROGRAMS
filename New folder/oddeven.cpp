#include <iostream>
using namespace std;

bool isEven(int a){

    //Odd
    if(a&1){
        return 0;
    }

    else{
        return 1;
    }

}

int main()
{

    int num;
    cout<<"Enter a number "<<endl;
    cin >>num;

    if (isEven(num))
    {
        cout<<"Number is Even.";
    }

    else{
        cout<<"Number is Odd.";
    }    

   return 0;
}