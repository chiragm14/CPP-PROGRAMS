#include <iostream>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[],int n){
    int i=0, m=0, j=n-1;

    while (m <= j) {
        if (arr[m] == 0) {
            swap(arr[i], arr[m]);
            i++;
            m++;
        } else if (arr[m] == 1) {
            m++;
        } else { // arr[m] == 2
            swap(arr[m], arr[j]);
            j--;
        }
    }
}

int main()
{
    int arr[6]={0,1,2,2,1,0};

    cout<<"Array before Sorting"<<endl;
    printArray(arr,6);

    sortOne(arr,6);
    cout<<"Array after Sorting"<<endl;
    printArray(arr,6);



    return 0;
}