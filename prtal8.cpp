#include<iostream>
using namespace std;
//Advance pattern to follow
int main(){
    //pattern-1
    cout<<"Pattern-1: "<<"\n";
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    //pattern-2
    cout<<"Pattern-2: "<<"\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }

    //pattern-3
    cout<<"Pattern-3"<<"\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=5;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }

    //pattern-4
    cout<<"Pattern-4"<<"\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    //pattern-5
    cout<<"Pattern-5"<<"\n";
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9-i;j++){
            cout<<" ";
        }
        
    }


    return 0;
}