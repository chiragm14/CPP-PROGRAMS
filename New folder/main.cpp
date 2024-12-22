#include <iostream>
using namespace std;

int main(){

int a=4;
int b =6;

cout<<"AND a&b is "<<(a&b)<<endl;
cout<<"OR a|b is "<<(a|b)<<endl;
cout<<"NOT ~a is "<<(~a)<<endl;
cout<<"XOR a^b is "<<(a^b)<<endl<<endl;


//------- LEFT SHIFT------- RIGHT SHIFT-----

cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl;
cout<<(19<<1)<<endl;
cout<<(21<<2)<<endl<<endl;


//----INCREMENT ------DECREMENT----

int i=7;

cout<<(++i)<<endl; 
// 8
cout<<(i++)<<endl;
// 8
cout<<(i--)<<endl;
// 9
cout<<(--i)<<endl;
// 7


return 0;

}