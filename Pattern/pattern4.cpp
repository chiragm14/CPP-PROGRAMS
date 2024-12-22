/*  ------Pattern 3------

321
321
321


*/





#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;            //int j=n; 
        while(j<=n){        // while(j>=1){
            
            cout<<n-j+1;    //     cout<<j;
            j=j+1;          //     j=j-1;
                            // }
        }           
        cout<<endl;

        i=i+1;

    }

    return 0;

}