#include<iostream>
#include<climits>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void SelectionSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
              int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
           }
       }
   }
   PrintArray(arr,n);
}

void BubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    PrintArray(arr,n);
}

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    PrintArray(arr,n);
}






int main(){
    int n=6;
    int arr[n]={5,4,7,8,9,12};
    cout<<"Array as input: "<<"\n";
    PrintArray(arr,n);
    //cout<<"Array after Selection Sort: "<<"\n";
    //SelectionSort(arr,n);
    //cout<<"Array after Bubble Sort: "<<"\n";
    //BubbleSort(arr,n);
    cout<<"Array after Insertion Sort: "<<"\n";
    InsertionSort(arr,n);

    return 0;
    
}