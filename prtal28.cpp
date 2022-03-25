#include<bits/stdc++.h>
using namespace std;

bool IsPower2(int n){
    return (n&&!(n&n-1));
}

int CountOne(int n){
    int count=0;
    while(n!=0){
        n=n & (n-1);
        count++;
    }
    return count;
}

void SubSets(int a[],int n)
{
    cout<<"Subset of Array: "<<"\n";
    for(int i=0;i<(1<<n);i++){
         for(int j=0;j<n;j++){
             if(i&(1<<j)){ //get bit logic
                 cout<<a[j]<<" ";
            }
        }
        cout<<"\n";
    }

}

int main(){
    cout<<"Checking the number is Power of 2: 16"<<"\n";
    cout<<"Result of Operartion: "<<IsPower2(16);
    cout<<"\n";
    cout<<"Checking the number of one in the input: 19"<<"\n";
    cout<<"Result of Operartion: "<<CountOne(19);
    cout<<"\n";
    cout<<"The Subset of Array: arr"<<"\n";
    int arr[4]={1,2,3,4};
    SubSets(arr,4);
    cout<<"\n";
    return 0;
}