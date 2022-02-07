#include<iostream>
#include<string>

using namespace std;

int OperationBinaryString(string str){
    int length=str.length();
    int variable=0;
    if(length==0){
        return -1;
    }
    else{
        int i=0;
        if(str[i]=='0' || str[i]=='1'){
            variable=str[i]-'0';
            i++;
        }
        while(i<length){
            if(str[i]=='A'){
                variable&=str[i+1]-'0';
            }else if(str[i]=='B'){
                variable|=str[i+1]-'0';
            }else if(str[i]=='C'){
                variable^=str[i+1]-'0';
            }
            i+=2;
        }
    }
    return variable;

}




int main(){
    cout<<"Binary String Operation: "<<OperationBinaryString("1C0C1C1A0B1")<<"\n";
    return 0;
}