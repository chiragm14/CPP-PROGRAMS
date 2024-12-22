#include <iostream>
using namespace std;

int main()
{

    /*
        int n;
        cout<<"Enter value of n: ";
        cin>>n;

        cout<<"Printing Count from 1 to n"<<endl<<endl;

        for(int i=1;i<=n;i++){

            cout<<i<<endl;
        }

        //Multiple things can be added in for loop
        cout<<endl<<endl;

        for(int a=0,b=1; a>=0 && b>=1; a--,b--){

            cout<<a<<" "<<b<<endl;
        }


        */

    // continue
    //  for(int i=1;i<=5;i++){

    //     cout<<"Hi"<<endl;
    //     cout<<"HEY"<<endl;
    //     continue;

    //     cout<<"HELLO HOW R YOU"<<endl;

    // }

    // for (int i = 0; i <= 15; i += 2)
    // {

    //     cout << i << " ";

    //     if (i & 1)
    //     {
    //         continue;
    //     }

    //     i++;
    // }

    // for (int i = 0; i < 5; i++)
    // {

    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {

        for (int j = i; j <= 5; j++)
        {
            if(i+j==10){
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}