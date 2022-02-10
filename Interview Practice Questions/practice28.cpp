#include<iostream>
using namespace std;

void MaxInArray(int arr[],int n){
    int max,max_i;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                max=arr[j];
                max_i=j;
            }
        }
    }
    cout<<"The Largest element and its Position: "<<max<<" "<<max_i<<"\n";
}

int main(){
    int n=10;
    int arr[n]={9,8,7,6,5,4,3,2,1};
    MaxInArray(arr,n);

    return 0;
}