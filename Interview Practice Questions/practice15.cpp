#include<iostream>
using namespace std;

int LargeSmallSum(int arr[],int n){
    
    if(n==0){
        return 0;
    }else if(n<=3){
        return 0;
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        int s_Elarge=0,s_Olarge=0;
        if(n%2==0){
            //even size case
            s_Elarge=arr[n-4];
            s_Olarge=arr[n-3];
            return s_Elarge+s_Olarge;
        }else{
            //odd size case
            s_Elarge=arr[n-3];
            s_Olarge=arr[n-4];
            return s_Elarge+s_Olarge;
        }

    }
    
    
    
    
}

int main(){
    int n=7;
    int arr[n]={1,8,0,2,3,5,6};
    cout<<"The Result of Large Sum Small: "<<LargeSmallSum(arr,n)<<"\n";
    
    return 0;

}