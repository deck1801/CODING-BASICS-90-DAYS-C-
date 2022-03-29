#include<bits/stdc++.h>
using namespace std;

//Recursion: Important + Very essential

int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}

int Power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower=Power(n,p-1);
    return n*prevPower;
}

int Factorial(int n){
    if(n==0){
        return 1;
    }
    int prevFact=Factorial(n-1);
    return n*prevFact;
}

int Fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);
}

void NormalFibonacci(int n){
    int f1=0,f2=1;
    cout<<f1<<" "<<f2<<" ";
    int f3;
    for(int i=0;i<=n-2;i++){
        f3=f1+f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
    }
}


int main(){
    cout<<"Recursion 1:Sum of numbers = "<<Sum(10)<<"\n";
    cout<<"Recursion 2:Power of a number = "<<Power(2,5)<<"\n";  
    cout<<"Recursion 3:Factorial of a number = "<<Factorial(5)<<"\n";
    cout<<"Recursion 4:Fibonacci of a number = "<<Fibonacci(5)<<"\n";
    cout<<"Normal Fibonacci Series: "<<"\n";
    NormalFibonacci(5);
    return 0;
}