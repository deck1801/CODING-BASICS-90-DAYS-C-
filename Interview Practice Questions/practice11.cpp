#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;


void operationBinaryString(char* str){
    int length=sizeof(str)/sizeof(char);
    cout<<length;
    
}

int main(){
    char data[]="1C0C1C1A0B1";
    operationBinaryString(data);
    return 0;
}