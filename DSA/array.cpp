#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<endl<<"Printing Array Using Function"<<endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl<<"Printing Done"<<endl;
}

int main()
{
    int number[15];
    cout<<"Value at 0 index of number is "<<number[0]<<endl;

    int second[3]={5,7,11};
    cout<<"Value at 2 index of second is "<<second[2]<<endl;

    int n=15;
    int third[n]={2,7};

    // cout<<third[14]<<endl;
    printArray(third,15);

    // for(int i=0;i<n;i++){

    //     cout<<third[i]<<" ";

    // }
    cout<<endl<<endl;
    cout<<"Printing the Array"<<endl;
    n=10;
    int fourth[n]={1};

    // for(int i=0;i<n;i++){

    //     cout<<fourth[i]<<" ";

    // }

    printArray(fourth,10);

    cout<<endl<<endl;
    cout<<"Printing Array with single value input"<<endl;

    int fifth[10];
    for (int i = 0; i < 10; i++) {
        fifth[i] = 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << fifth[i] << " ";
        
    }
    
    cout<<endl;

    int arraySize= sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth is "<<arraySize<<endl;


    cout<<endl<<"Working Good";

    return 0;
}