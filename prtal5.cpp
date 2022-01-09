#include<iostream>
using namespace std;

void notThreeDiv(int range){
    for(int i=1;i<=range;i++){
        if(i%3==0){continue;}
        cout<<i<<" ";
    }
    cout<<endl;
}

void checkingPrimeNumber(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            cout<<"NON PRIME INTEGER"<<endl;
            break;
        }
    }
    if(i==a){
        cout<<"PRIME INTEGER"<<endl;
    }
}

int main(){
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue; //to move to next segement
        }
        if(pocketMoney==0){
            break; //to terminate the loop
        }
        cout<<"Go OUT TODAY!"<<endl;
        pocketMoney=pocketMoney-300;
    }
    cout<<"\n";
    notThreeDiv(100);
    cout<<"\n";
    checkingPrimeNumber(5);
    return 0;
}