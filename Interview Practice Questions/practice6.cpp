#include<iostream>
#include<string>
using namespace std;

int main(){
    int num=123456789;
    string no=to_string(num);
    cout<<no<<endl;
    int len=no.length();
    int sum=0;
    for(int i=0;i<len;i++){
        int tar=no[i]-'0';
        if(tar%2!=0){
            sum=sum+tar;
        }
    }
    cout<<"Sum of Odd number in big number: "<<sum<<"\n";
    return 0;
}