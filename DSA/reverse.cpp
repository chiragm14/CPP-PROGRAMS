#include <iostream>
using namespace std;


void printArray(int arr[],int n){
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}


void reverse(int arr[],int n){

    int start = 0;
    int end = n-1;

    while(start<=end){

        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}


int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={10,20,30,40,50};

    cout<<"Original Array"<<endl;
    printArray(arr,6);
    printArray(brr,5);
    cout<<endl;

    reverse(arr,6);
    reverse(brr,5);

    cout<<"Reverse Array"<<endl;
    printArray(arr,6);
    printArray(brr,5);


    return 0;
}