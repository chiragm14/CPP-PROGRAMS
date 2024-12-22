#include <iostream>
using namespace std;

void printArray(char arr[],int size){
    cout<<endl<<"Printing Array Using Function"<<endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl<<"Printing Done"<<endl;
}

int main()
{
    char ch[5]={'A','B','C','D','E'};

    cout<<ch[4]<<endl;

    printArray(ch,5);


    return 0;
}