#include<iostream>
using namespace std;

int differenceofSum(int n,int m){
    int sum_div=0,sum_ndiv=0;
    for(int i=1;i<=m;i++){
        if(i%n==0){
            sum_div+=i;
        }else{
            sum_ndiv+=i;
        }
    }
    return sum_ndiv-sum_div;
    
}

int main(){
    cout<<"The result of  difference of sum: "<<differenceofSum(3,10)<<"\n";
    return 0;
}