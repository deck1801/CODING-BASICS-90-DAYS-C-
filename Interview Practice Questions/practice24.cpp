#include<iostream>
using namespace std;

void SumSecondLargest(int arr[],int n)
{
   int even[50],odd[50];
   
   if(n%2==0){
        even[n/2],odd[n/2];
        even[0]=arr[0];   
    }else{
         even[(n+1)/2],odd[(n-1)/2];
         even[0]=arr[0];
    }
    int e_count=1,o_count=0;
    for(int i=1;i<n;i++){
        if(i%2==0){
            even[e_count]=arr[i];
            e_count++;
        }else{
            odd[o_count]=arr[i];
            o_count++;
        }
    }
    for(int i=0;i<e_count;i++){
        for(int j=0;j<e_count-1;j++){
            if(even[j]<even[j+1]){
                int temp=even[j];
                even[j]=even[j+1];
                even[j+1]=temp;
            }
        }
    }
    for(int i=0;i<o_count;i++){
        for(int j=0;j<o_count-1;j++){
            if(odd[j]<odd[j+1]){
                int temp=odd[j];
                odd[j]=odd[j+1];
                odd[j+1]=temp;
            }
        }
    }
    cout<<"The Sum of second largest: "<<even[1]+odd[1]<<"\n";

}



int main(){
    int n=5;
    int arr[5]={3,4,1,7,9};
    SumSecondLargest(arr,n);
    return 0;
}