#include<iostream>
using namespace std;

int calculate(int m,int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        if(i%3==0 && i%5==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int m=100,n=160;
    cout<<"Result of calculate: "<<calculate(m,n)<<"\n";

    return 0;
}