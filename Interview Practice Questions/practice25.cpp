#include<iostream>
using namespace std;

void tableofMultiples(int n){
    int sum=0;
    for(int i=1;i<=10;i++){
        int prod=i*n;
        cout<<prod<<" ";
        sum+=prod;
    }
    cout<<"\n";
    cout<<sum<<"\n";
}

int main(){
    int n=12;
    cout<<"The Result of table f multiple: "<<"\n";
    tableofMultiples(n);

    return 0;
}