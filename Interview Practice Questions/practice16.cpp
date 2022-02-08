#include<iostream>
using namespace std;

int ProductSmallestPair(int sum,int arr[],int n){
     int check=0,product=0;
     if(n==0 || n<2){
        return -1;
     }else{
        //sorting the array
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        check=arr[0]+arr[1];
        if(check<=sum){
            product=arr[0]*arr[1];
        }else{
            product=0;
        }
        
     }
     return product;
        

}

int main(){
    int sum=4,n=6;
    int arr[n]={9,8,3,-7,3,9};
    cout<<"The Result of Product Smallest Pair: "<<ProductSmallestPair(sum,arr,n)<<"\n";
    return 0;
}