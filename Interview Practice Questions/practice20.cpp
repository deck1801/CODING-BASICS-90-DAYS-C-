#include<iostream>
#include<string>
using namespace std;

string ReplaceCharacter(string str,char ch1,char ch2){
    int length=str.length();
    for(int i=0;i<length;i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }else if(str[i]==ch2){
            str[i]=ch1;
        }
    }
    
    
    return str;
}

int main(){
    string str="apples";
    char ch1='a',ch2='p';
    cout<<"Result of Replace Character: "<<ReplaceCharacter(str,ch1,ch2)<<"\n";
    return 0;
}