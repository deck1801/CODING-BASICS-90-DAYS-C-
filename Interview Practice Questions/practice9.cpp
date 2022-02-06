#include<iostream>
using namespace std;

void PrintNieven(int n){
    if(n<0){
        cout<<"Not Possible"<<"\n";
    }else{
        int arr[10],counter=0,sum=0;
        int check=n;
        while(n!=0){
            int digit=n%10;
            arr[counter]=digit;
            counter++;
            n/=10;
        }
        for(int i=0;i<counter;i++){
            sum+=arr[i];
        }
        if(check%sum==0){
            cout<<"The  Nieven Number: "<<check/sum<<"\n";
        }else{
            cout<<"Not Possible"<<"\n";
        }
    }
}

int main(){
    PrintNieven(36);
    return 0;
}