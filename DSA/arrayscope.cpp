#include <iostream>
using namespace std;


void update(int arr[],int n){
    
    cout<<endl<<"Inside the declared function"<<endl;
    
    //Updating the array 
    arr[0]=120;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Going Back to Main Function"<<endl;

}


int main()
{

    int arr[3]={1,2,3};

    update(arr,3);

    cout<<endl;
    cout<<"Printing in Main Function"<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    return 0;
}