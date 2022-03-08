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
    // and the differnces between the consecutive integers are equala
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int count=0;
            int prev=0,curr=0;
            curr=a[j]-a[j+1];
            if(curr!=prev){
                prev=curr;
            }else{
                count++;
                prev=curr;
            }
        }
    }


}


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The Elements in the array: "<<"\n";
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    SumSubarray(a,10);
    
    return 0;
}