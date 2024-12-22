#include <iostream>
using namespace std;

int main()
{

    int ans = 0;
    int size=5;

    int arr[5]={1,3,4,1,3};

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];  //xor 1^1=0     0^1=1

    }
    cout<<ans;

    return 0;
}