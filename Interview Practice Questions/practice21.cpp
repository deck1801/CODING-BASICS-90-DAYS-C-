#include<iostream>
using namespace std;

int OperationChoices(int c,int a,int b){
    if(c==1){
        return a+b;
    }else if(c==2){
        return a-b;
    }else if(c==3){
        return a*b;
    }else if(c==4){
        return a/b;
    }
}


int main(){
    int c=2,a=16,b=20;
    cout<<"Result of Operation Choices: "<<OperationChoices(c,a,b)<<"\n";

    return 0;
}