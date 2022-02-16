#include<iostream>
using namespace std;

//SubArray + Subsequences
int main(){
    int n=5;
    int arr[n]={1,2,0,7,5};
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<"\n";
        }
    }
    
    return 0;
}