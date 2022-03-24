#include<bits/stdc++.h>
using namespace std;

void PrintArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void BubbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Using Binary Sort: "<<"\n";
    PrintArray(a,n);
}

void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    cout<<"Using Selection Sort: "<<"\n";
    PrintArray(a,n);
}

void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<"Using Insertion Sort: "<<"\n";
    PrintArray(a,n);
}




int main(){
    int arr[10]={12,1,2,3,4,5,18,99,100,0};
    int arr1[10]={12,1,2,3,4,5,18,99,100,0};
    int arr2[10]={12,1,2,3,4,5,18,99,100,0};
    cout<<"Array Before Sort: "<<"\n";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    BubbleSort(arr,10);
    SelectionSort(arr1,10);
    InsertionSort(arr2,10);
    return 0;
    
}