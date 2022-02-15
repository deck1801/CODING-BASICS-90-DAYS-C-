#include<iostream>
using namespace std;

//Array Challanges-1
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void MaxTillI(int arr[],int n){
    int result[n];
    int max=arr[0];
    result[0]=max;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(max<arr[j]){
                max=arr[j];
            }
        }
        result[i]=max;
    }
    PrintArray(result,n);
}

int main(){
    int n=6;
    int arr[n]={1,0,5,4,6,8};
    cout<<"The ARRAY before: "<<"\n";
    PrintArray(arr,n);
    cout<<"The Result of Max till I problem: "<<"\n";
    MaxTillI(arr,n);

    return 0;
}