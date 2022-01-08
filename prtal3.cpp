//If-ELSE Statement Practice

#include<iostream>
using namespace std;

void maxofthree(int a,int b,int c){
    if(a>b && a>c){
        cout<<"a is the greatest\n";
    }else if(b>a && b>c){
        cout<<"b is the greatest\n";
    }else{
        cout<<"c is the greatest\n";
    }
}

void oddoreven(int a){
    if(a%2==0){
        cout<<"a is even\n";
    }else{
        cout<<"a is odd\n";
    }
}

int main(){

    maxofthree(4,7,19);
    cout<<"\n";
    oddoreven(5);
    cout<<"\n";
    return 0;
}