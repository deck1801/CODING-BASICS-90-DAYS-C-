#include<iostream>
#include<math.h>
using namespace std;

void CheckPrime(int a){
    int flag=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Prime Number"<<"\n";
    }else{
        cout<<"It is not a Prime Number"<<"\n";
    }
    cout<<"\n";
}

void CheckReverseDigit(int a){
    int rev=0,rem,check=a;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    if(rev==check){
        cout<<"Reverse of a Number is same"<<"\n";
    }else{
        cout<<"Reverse of a Number is different"<<"\n";
    }
    cout<<"\n";
}

void CheckArmstrong(int a){
    int pred=0,sum=0,check=a;
    while(a!=0){
        pred=a%10;
        sum+=pow(pred,3);
        a/=10;
    }
    if(check==sum){
        cout<<"Armstrong Number"<<"\n";
    }else{
        cout<<"Not a Armstrong Number"<<"\n";
    }
    cout<<"\n";
}

int main(){
    
    int a;
    cout<<"Enter the number to check:"<<"\n";
    cin>>a;
    CheckPrime(a);
    CheckReverseDigit(a);
    CheckArmstrong(a);
    

    return 0;
}