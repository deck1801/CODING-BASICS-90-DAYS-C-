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

void PrintFactorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    cout<<"Factorial of the number: "<<fact<<"\n";
    cout<<"\n";
}
int fact(int a){
    int fact1=1;
    for(int i=1;i<=a;i++){
        fact1*=i;
    }
    return fact1;
}

void PrintCombination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    cout<<"Combination of outcomes: "<<comb<<"\n";
    cout<<"\n";
}

int combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

void PrintPascalTriangle(int n){
    cout<<"The Pascal Triangle would be: "<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int value=combination(i,j);
            cout<<value<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}


int main(){
    int a,b;
    cout<<"Enter Two Numbers for Operation: "<<"\n";
    cin>>a>>b;
    int n,r;
    cout<<"Enter range for combination: "<<"\n";
    cin>>n>>r;
    PrintPrimeNumber(a,b);
    PrintFibonacci(a);
    PrintFactorial(a);
    PrintCombination(n,r);
    PrintPascalTriangle(6);
    

    return 0;
}