#include <bits/stdc++.h>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void FirstRepeatingElement(int a[],int n){
    const int N=n+2; //set to maximum
    int idx[N]; //identity matrix
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
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
        j++; //now sum value is less than or equal to sum;
    }
    if(sum==s){
        cout<<"The Start Position: "<<i+1<<" "<<"The End Postion: "<<j<<"\n";
    }

    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<"The Start Postions: "<<st<<" "<<"The End Postion: "<<en<<"\n";
} 

void SmallPostiveNumber(int a[],int n){
    int N=n+4;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=true;
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(check[i]==false){
            res=i;
            break;
        }
    }
    cout<<"The Smallest Positive Missing Number: "<<res<<"\n";
}


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The Input Array: "<<"\n";
    printArray(a,10);
    int b[7]={1,5,3,4,3,5,6};
    FirstRepeatingElement(b,7);
    int c[4]={1,2,3,8};
    SubarraySum(c,4,5);
    int d[6]={0,-9,1,3,-4,5};
    SmallPostiveNumber(d,6);
    return 0;
}  