#include<iostream>
using namespace std;

int NumberOfCarries(int num1,int num2){
    int count=0,carry=0;
    if(num1<num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    while(num1!=0 || num2!=0){
        int res=(num1%10)+(num2%10)+carry;
        if(res/10==0){
            carry=0;
        }else{
            carry=(res/10)%10;
            count++;
        }
        num1/=10;
        num2/=10;
    }
    return count;
}


int main(){
    int num1=23,num2=563;
    cout<<"The Result of Number of Carries: "<<NumberOfCarries(num1,num2)<<"\n";

    return 0;
}