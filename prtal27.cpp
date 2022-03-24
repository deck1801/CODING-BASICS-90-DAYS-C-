#include<bits/stdc++.h>
using namespace std;

int GetBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int SetBit(int n,int pos){
    return (n|(1<<pos));
}

int ClearBit(int n,int pos){
    int mask=~(1<<pos);
    return (n&mask);
}

int UpdateBit(int n,int pos,int value){
    //clear bit operation
    int mask=~(1<<pos);
    n=n&mask;
    //set bit postion;
    return (n|(value<<pos));
}

int main(){
   
    cout<<"Result of Get-Bit: n=5, pos=2"<<"\n";
    cout<<"The result: "<<GetBit(5,2)<<"\n";
    cout<<"\n";
    cout<<"Result of Set-Bit: n=5, pos=1"<<"\n";
    cout<<"The result: "<<SetBit(5,1)<<"\n";
    cout<<"\n";
    cout<<"Result of Clear-Bit: n=5, pos=1"<<"\n";
    cout<<"The result: "<<ClearBit(5,1)<<"\n";
    cout<<"\n";
    cout<<"Result of Clear-Bit: n=5, pos=1, value=1"<<"\n";
    cout<<"The result: "<<UpdateBit(5,1,1)<<"\n";
    cout<<"\n";
    return 0;
}