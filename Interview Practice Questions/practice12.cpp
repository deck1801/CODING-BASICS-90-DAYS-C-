#include<iostream>
using namespace std;

void PasswordVerification(string str){
    int n=str.length();
    int flag=0,dig=0,upp=0;
    if(n<=4){
        cout<<"Password is way to small"<<"\n";
    }else if(isdigit(str[0])) {
        cout<<"First Character never be the integer"<<"\n";
    }else{
        for(int i=0;i<n;i++){
            if(str[i]==' ' || str[i]=='/'){
                flag=0;
            }else if(isdigit(str[i])==true){
                dig++;
            }else if(isupper(str[i])==true){
                upp++;
            }else{
                flag=1;
            }
        }
        if(flag==1 && dig>0 && upp>0){
            cout<<"Password is good and Strong"<<"\n";
        }else{
            cout<<"Password is not correct"<<"\n";
        }
    }
}



int main(){
    PasswordVerification("aA1_67");

    return 0;
}