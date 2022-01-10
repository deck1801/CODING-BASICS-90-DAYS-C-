#include<iostream>
using namespace std;

void checkPrime(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            cout<<"Not a Prime number\n";
            break;
        }
    }
    if(a==i){
        cout<<"Prime Number\n";
    }
}

int main(){
    checkPrime(4);
    
    return 0;
}