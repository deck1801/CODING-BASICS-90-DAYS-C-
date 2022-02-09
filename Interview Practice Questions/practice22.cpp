#include<iostream>
using namespace std;

int MaxExponenets(int a,int b){
    int max=0,number=0;
    for(int i=a;i<=b;i++){
        int count=0;
        if(i%2==0){
            int tar=i;
            while(tar!=0){
                if(tar%2==0){
                    count++;
                }
                tar/=2;
            }
            if(count>max){
                max=count;
                number=i;
            }
        }
    }
    return number;
}

int main(){
    int a=10,b=20;
    cout<<"The Result Max Exponents: "<<MaxExponenets(a,b)<<"\n";
    return 0;
}