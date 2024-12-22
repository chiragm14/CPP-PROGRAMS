#include <iostream>
using namespace std;


int getSum(int array[],int n){

    int sum=0;

    for(int i=0;i<n;i++){
        sum = sum + array[i]; 
    }

    return sum;
}


int main()
{
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int array[10];

    for(int i=0;i<size;i++){
        cin>>array[i];        
    }


    cout<<"Sum of array is "<<getSum(array,size)<<endl;

    return 0;
}