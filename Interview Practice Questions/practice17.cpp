#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string inttochar(int n){
    string cract;
    if(n<=9){
        cract=n+'0';
        return cract;
    }
    if(n>=10 || n<=35){
        cract=n+55;
        return cract;
    }
}

string DectoNBase(int n,int num){
    string f_result;
    while(num!=0){
        int rem=num%n;
        f_result+=inttochar(rem);
        num/=n;
    }
    reverse(f_result.begin(),f_result.end());
    return f_result;
}

int main(){
    int n=21,num=5678;
    cout<<"Result of Dec to N-Base: "<<DectoNBase(n,num)<<"\n";
    return 0;
}