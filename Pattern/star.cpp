#include<iostream>
using namespace std;

void starpattern(int n){

  for(int i=1;i<=n;i++){

    //Space
    for(int j=1;j<=n-i;j++){
        cout<<" ";
        
    }

    //Star
    for(int j=1;j<=(2*i-1);j++){
        cout<<"*";
        
    }

    //Space
    for(int j=1;j<=n-i;j++){
        cout<<" ";
        
    }
    cout<<endl;
    
}

}

void starp(int n){

  for(int i=0;i<n;i++){

    //Space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
        
    }

    //Star
    for(int j=0;j<(2*i+1);j++){
        cout<<"*";
        
    }

    //Space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
        
    }
    cout<<endl;
    
}

}


void reversestar(int n){

  for(int i=0;i<n;i++){

    //Space
    for(int j=0;j<i;j++){
        cout<<" ";
        
    }

    //Star
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
        
    }

    //Space
    for(int j=0;j<i;j++){
        cout<<" ";
        
    }
    cout<<endl;
    
}

}



int main(){

int n;
cout<<"Enter value of n: ";
cin>>n;

// starpattern(n);

starp(n);

reversestar(n);

return 0;

}



