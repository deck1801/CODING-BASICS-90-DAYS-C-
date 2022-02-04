#include<iostream>
using namespace std;

void PrintPrimeNumber(int a, int b){
    cout<<"Prime Number between "<<a<<" and "<<b<<":"<<"\n";
    for(int i=a+1;i<b;i++){
        int flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

void PrintFibonacci(int a){
    int f1=0;
    int f2=1,f3;
    cout<<"The Fibonacci Series: "<<"\n";
    cout<<f1<<" "<<f2<<" "; 
    for(int i=0;i<a;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<f3<<" ";
    }
    cout<<"\n";
    
}

int main(){
    int a,b;
    cout<<"Enter Two Numbers for Operation: "<<"\n";
    cin>>a>>b;
    PrintPrimeNumber(a,b);
    PrintFibonacci(a);

    return 0;
}