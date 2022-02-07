#include<iostream>
using namespace std;

int findCount(int arr[],int length,int num,int diff){
    int count=0,flag=0;
    for(int i=0;i<length;i++){
        if(num-arr[i]>=0){
            if(num-arr[i]<=diff){
                count++;
            }
            flag=1;
        }
    }
    if(flag==1){
        return count;
    }else{
        return -1;
    }
}



int main(){
    int length=6,num=13,diff=12;
    int arr[6]={12,3,14,56,77,13};
    cout<<"The No. of elements satify the condition: "<<findCount(arr,length,num,diff)<<"\n";
    return 0;
}