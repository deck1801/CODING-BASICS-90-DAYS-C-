#include<bits/stdc++.h>
using namespace std;

//Inclusion and Exclusion principle
int IEdivisible(int n,int a,int b){
    int c1=n/a; //numbers divisible by a
    int c2=n/b; // numbers divisible by b

    int c3=n/(a*b); //numbers divisible by both a and b
    
    return c1+c2-c3;
}

void NorGCD(int a,int b){
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    int hcf=0;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    cout<<"The Normal HCF programme: "<<hcf<<"\n"; 
}

void IEgcd(int a,int b){
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    int temp=0;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"Inclusion Exclusion GCD result: "<<temp<<"\n";
}



int main(){
    int n=100,a=2,b=5;
    cout<<"The basic result of Inclusion and Exclusion: "<<IEdivisible(100,2,5)<<"\n";
    NorGCD(42,24);
    IEgcd(42,24);
    return 0;
}