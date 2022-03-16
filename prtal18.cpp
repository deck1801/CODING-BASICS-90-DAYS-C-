#include<iostream>
using namespace std;

//Problem on Arrays: - Subarray vs Subsequences

void SumSubarray(int arr[],int n){
    cout<<"The Sum of all Subarrays: "<<"\n";
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[i];
            cout<<sum<<"\n";
        }
    }
    cout<<"\n";
}

void LongestArithmaticSubarray(int a[],int n){
    //Arithmatic array: it is the array that contains at least two integers 
    // and the differnces between the consecutive integers are equal.
    int ans=2,pd=a[1]-a[0],j=2,curr=2;
    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"The length of longest Arithmatic Subarray: "<<ans<<"\n";
    cout<<"\n";
}

void RecordbreakingDay(int a[],int n){
    a[n+1];
    a[n]=-1;
    if(n==1){
        cout<<"1"<<"\n";
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<"The Number of Record Breaking Days: "<<ans<<"\n";
}


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The Elements in the array: "<<"\n";
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    SumSubarray(a,10);
    LongestArithmaticSubarray(a,10);
    int b[8]={1,2,0,7,2,0,2,2};
    RecordbreakingDay(b,8);
    
    return 0;
}