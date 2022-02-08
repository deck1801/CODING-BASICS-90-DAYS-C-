#include<iostream>
#include<string>
using namespace std;

string MoveHyphen(string target){
    int length=target.length();
    if(length==0){
        return NULL;
    }else{
        int count=0;
        for(int i=0;i<length;i++){
            if(target[i]=='-'){
                count++;
            }
        }
    }
}

int main(){
    return 0;
}