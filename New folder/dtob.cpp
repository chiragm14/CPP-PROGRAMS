#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n*=(-1);    //n=n*(-1);
    int i=0,ans=0;
    while(n!=0){
        int bit = n & 1;
        ans = ans + (bit * pow(10,i));
        n = n >> 1;
        i++;
        }
    int newAns = ~ans+1;
    cout << newAns;
}









// #include <iostream>
// using namespace std;

// // Function that convert Decimal to binary
// void decToBinary(int n)
// {
//     // Size of an integer is assumed to be 32 bits
//     for (int i = 31; i >= 0; i--) {
//         int k = n >> i;
//         if (k & 1)
//             cout << "1";
//         else
//             cout << "0";
//     }
// }

// // driver code
// int main()
// {
//     int n = 32;
//     decToBinary(n);
// }
