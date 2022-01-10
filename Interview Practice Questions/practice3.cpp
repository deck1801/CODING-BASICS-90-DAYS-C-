#include<iostream>
using namespace std;

void PrintArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    PrintArr(a,10);    
    return 0;
}