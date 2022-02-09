#include<iostream>
using namespace std;

bool CheckPalin(int n){
    
    int check=n,rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    
    if(check==rev){
        return true;
    }else{
        return false;
    }
}

void PrintPalindrome(int a,int b){
    cout<<"The Result of Intermediate Palindrome: "<<"\n";
    for(int i=a+1;i<b;i++){
        if(CheckPalin(i)==true){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}


int main(){
    int a=100,b=200;
    PrintPalindrome(a,b);
    return 0;
}
