#include<iostream>
#include<climits>
using namespace std;

//MAXIMUM MINIMUM
int maxarr(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minarr(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
void PrintMaxMin(int arr[],int n){
    cout<<"MAX of Array: "<<maxarr(arr,n)<<", "<<"MIN of ARRAY: "<<minarr(arr,n)<<"\n";
}

//Searching Algorithms for Array
bool LinearSearch(int arr[],int n,int s){
    int flag=0;
    if(n==0){
        return false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==n){
            flag=1;
        }
    }
    if(flag==1){
        return true;
    }else{
        return false;
    }
}

bool BinarySearch(int arr[],int n,int s){
    int mid=0;
    if(n==0){
        return false;
    }
    if(n%2==0){
        mid=n/2;
    }else{
        mid=(n-1)/2;
    }
    if(s<arr[mid])
    {
        int flag=0;
        for(int i=0;i<=mid;i++){
            if(s==arr[i]){
                flag=1;
            }
        }
        if(flag==1){
            return true;
        }else return false;
        
    }else if(s>arr[mid]){
        int flag=0;
        for(int i=mid+1;i<n;i++){
            if(s==arr[i]){
                flag=1;
            }
        }
        if(flag==1){
            return true;
        }else return false;
    }else return false;
}


int main(){
    int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    PrintMaxMin(arr,n);
    cout<<"The Result of Linear Search: "<<LinearSearch(arr,n,7)<<"\n";
    cout<<"The Result of Binary Search: "<<BinarySearch(arr,n,5)<<"\n";
    return 0;
}