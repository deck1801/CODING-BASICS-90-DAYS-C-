#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void FirstRepeatingElement(int a[],int n){
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minidx=INT64_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT64_MAX){
        cout<<"Not found: -1"<<"\n";
    }
    else{
        cout<<"First Repeating Element Index: "<<minidx+1<<"\n";
    }
}

void SubarraySum(int a[],int n,int s){
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<"Start Position: "<<i+1<<" "<<"End Position: "<<j<<endl;
        return;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum == s)
    }
} 


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The Input Array: "<<"\n";
    printArray(a,10);
    int b[7]={1,5,3,4,3,5,6};
    FirstRepeatingElement(b,7);
    return 0;
}  