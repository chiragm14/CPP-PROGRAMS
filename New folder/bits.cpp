#include <iostream>
using namespace std;

int countBits(int n)
{
    int count = 0;
    while (n>0)
    {
        if ((n&1)==1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{

    int a,b;
    cout<<"Enter values of a and b ";
    cin >>a>>b;

    cout<<"Total no of bits in a and b are "<<(countBits(a)+countBits(b))<<endl;

    // cout << "No. of set bits in " <<a<< " is " << countBits(a) << endl;    
    // cout << "No. of set bits in " <<b<< " is " << countBits(b) << endl;

    return 0;
}