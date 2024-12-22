#include<iostream>
using namespace std;

void numpattern(int n){

    int start=1;

    for(int i=1;i<=n;i++){

        if(i%2==0) start=0;
        else start=1;

        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }

}


void numerpattern(int n){

    int space=2*(n-1);

    for(int i=1;i<=n;i++){

       //Number
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //Space  
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

         //Number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -=2;
    }

}

void newpattern(int n){

    
     int start =1;
    for(int i=1;i<=n;i++){

       //Number
       
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
       
        cout<<endl;
        
    }

}

void abcpattern(int n){


    for(int i=1;i<=n;i++){
       
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        
        }
        cout<<endl;
        
    }

}

void abcreverse(int n){


    for(int i=n;i>=1;i--){
       
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        
        }
        cout<<endl;
        
    }

}

void abcpattern1(int n){

   

    for(int i=0;i<n;i++){
        
        char ch ='A'+i;

        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        
        }
        cout<<endl;
        
    }

}

void abpattern(int n){

    

    for(int i=0;i<n;i++){

       //Spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        char ch='A';
        int breakpoint=(2*i+1)/2;

        //ABCD 
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

         //Spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }

}


void epattern(int n){

   

    for(int i=0;i<n;i++){
        
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        
        }
        cout<<endl;
        
    }

}


int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // numpattern(n);

    // numerpattern(n);

    // newpattern(n);

    // abcpattern(n);

    // abcreverse(n);

    // abcpattern1(n);

    // abpattern(n);

    epattern(n);

    return 0;
}