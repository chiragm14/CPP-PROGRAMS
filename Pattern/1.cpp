#include<iostream>
using namespace std;

void pattern1(int n){

    for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){
        cout<<"* ";
        
    }
    cout<<endl;
    
}

}

void pattern2(int n){

  for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
        cout<<"* ";
        
    }
    cout<<endl;
    
}


}

void pattern3(int n){

  for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
        cout<<j<<" ";
        
    }
    cout<<endl;
    
}
}


void pattern4(int n){

  for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
        cout<<i<<" ";
        
    }
    cout<<endl;
    
}
}

void pattern5(int n){

  for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i+1;j++){
        cout<<"* ";
        
    }
    cout<<endl;
    
}
}


void pattern6(int n){

  for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i+1;j++){
        cout<<j<<" ";
        
    }
    cout<<endl;
    
}
}




int main(){

int n;
cout<<"Enter value of n: ";
cin>>n;

// pattern1(n);

// pattern2(n);

// pattern3(n);

// pattern4(n);

// pattern5(n);

pattern6(n);

return 0;

}

