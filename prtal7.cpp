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
     
     cout<<"\n";
     cout<<"PATTERN-3: "<<"\n";
     //pattern-3
     for(int i=6;i>0;i--){
         for(int j=0;j<i;j++){
            cout<<"*"<<" ";
         }
         cout<<"\n";
     }

     cout<<"\n";
     cout<<"PATTERN-4: "<<"\n";
     //pattern-4
     for(int i=0;i<6;i++){
         for(int j=i;j>0;j--){
            cout<<"*"<<" ";
         }
         cout<<"\n";
     }

     cout<<"\n";
     cout<<"PATTERN-5: "<<"\n";
     //pattern-5
     for(int i=0;i<6;i++){
         for(int j=i;j>0;j--){
            cout<<i<<" ";
         }
         cout<<"\n";
     }
    
    cout<<"\n";
    cout<<"PATTERN-5: "<<"\n";
    //pattern-5
    int count=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"PATTERN-6: "<<"\n";
    //pattern-6
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        int space=(2*5)-(2*i);
        for(int j=1;j<=space;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
     }
     for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        int space=(2*5)-(2*i);
        for(int j=1;j<=space;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
     }

    
    
    return 0;
}