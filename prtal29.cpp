#include<bits/stdc++.h>
using namespace std;

int SetBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}


void FindUnique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^a[i];
    }
    cout<<"The unique number in array: "<<xorsum<<"\n"; 
}

void FindTwoUniqueNumber(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int temp=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum&1; //geting the lastbit
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(SetBit(a[i],pos-1)){
            newxor=newxor^a[i];
        }
    }
    int secxor=temp^newxor;
    cout<<"The first unique: "<<newxor<<"\n";
    cout<<"The second unique: "<<secxor<<"\n";
}

bool getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n,int pos){
    return (n|(1<<pos));
}

void FindUniqueInThree(int a[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(a[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    cout<<"The Unique Number: "<<result<<"\n";
}


int main(){
    int arr[7]={2,4,6,3,4,6,2};
    int arr1[8]={2,4,6,7,4,5,6,2};
    int arr2[10]={1,2,3,3,4,2,1,1,3,2};
    FindUnique(arr,7);
    FindTwoUniqueNumber(arr1,8);
    FindUniqueInThree(arr2,10);


    return 0;

}
