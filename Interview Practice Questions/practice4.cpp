#include<iostream>
using namespace std;

void arrngeArr(int arr[],int size){
    int arge[size];
    int mid;
    if(size%2==0){
        mid=(size/2);
    }else{
        mid=((size+1)/2);
    }
    for(int i=0;i<mid;i++){ //bubble sort
        for(int j=0;j<mid-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
    for(int i=0;i<mid;i++){ //bubble sort
        for(int j=mid;j<size-1;j++){
            if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
    cout<<"The Arranged Array: "<<"\n";
    for(int count=0;count<size;count++){
        cout<<arr[count]<<" ";
    }
    cout<<"\n";
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    arrngeArr(a,10);
    return 0;
}