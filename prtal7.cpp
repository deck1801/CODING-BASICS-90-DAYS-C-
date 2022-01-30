#include<iostream>
using namespace std;
//pattern Questions
int main(){
     
     //pattern-1
     cout<<"PATTERN-1: "<<"\n";
     for(int i=0;i<5;i++){
         for(int j=0;j<5;j++){
             cout<<"*"<<" ";
         }
         cout<<"\n";
     }
     
     cout<<"\n";
     cout<<"PATTERN-2: "<<"\n";
     
     //pattern-2
     for(int i=0;i<5;i++){
         for(int j=0;j<4;j++){
            if(i==1 && (j==1 || j==2)){
                cout<<" "<<" ";
            }else if(i==2 && (j==1 || j==2)){
                cout<<" "<<" ";
            }
            else if(i==3 && (j==1 || j==2)){
                cout<<" "<<" ";
            }else{
                cout<<"*"<<" ";
            }
        }
        cout<<"\n";
     }
     
    
    
    return 0;
}