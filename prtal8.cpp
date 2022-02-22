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
    for(int i=1;i<=5;i++){
        int j;
        for(j=1;j<=5-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=5;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=5+i-1;j++){
            cout<<k++;
        }
        cout<<"\n";
    }

    //pattern-6
    cout<<"Pattern-6"<<"\n";
    for(int i=1;i<=5;i++){
        int j;
        for(j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(;j<=5;j++){
            cout<<"*";
        }
        for(;j<=5+i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    //pattern-7
    cout<<"Pattern-7"<<"\n";
    for(int i=1;i<=3;i++){
        for(int j=1;j<=9;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }else{
                cout<<" ";
            } 
        }
        cout<<"\n";
    }
    
    //pattern-8
    cout<<"Pattern-8"<<"\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }


    return 0;
}