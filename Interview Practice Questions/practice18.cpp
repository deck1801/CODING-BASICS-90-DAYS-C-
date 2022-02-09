#include<iostream>
#include<string>
using namespace std;

string MoveHyphen(string target){
    int length=target.length();
    if(length==0){
        return NULL;
    }else{
        int count=0;
        for(int i=0;i<length;){
            if(target[i]=='-'){
                count++;
                target.erase(i,1);
            }else{
                i++;
            }
        }
        while(count--){
            target='-'+target;
        }
        return target;
    }
}

int main(){
    string target="String-Compare";
    cout<<"The Result of Move Hyphen: "<<MoveHyphen(target)<<"\n";
    return 0;
}