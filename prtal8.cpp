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
            cout<<j-i<<" ";
        }
        cout<<"\n";
    }


    return 0;
}