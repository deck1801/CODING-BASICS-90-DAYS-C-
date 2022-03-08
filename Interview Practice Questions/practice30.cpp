#include<iostream>
using namespace std;

int Rgcd(int a,int b){
    if(a==0){
        return b;
    }else if(b==0){
        return a;
        }else{
        if(a>b){
            return Rgcd(a-b,b);
        }else if(b>a){
            return Rgcd(a,b-a);
        }
    }
}

int Fgcd(int a,int b){
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
   }
   return gcd;
}

int main(){
    int a=60,b=40;
    cout<<"The GCD of two numbers (Recursive): "<<Rgcd(a,b)<<"\n";
    cout<<"The GCD of two numbers (Normal): "<<Fgcd(a,b)<<"\n";

    return 0;
}