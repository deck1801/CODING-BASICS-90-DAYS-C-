#include<bits/stdc++.h>
using namespace std;

//Question on Subarray
void PrintSubarray(int a[],int n){
    cout<<"The Possible Subarrays: "<<"\n";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<"\n";
        }
    }
    cout<<"\n";
}

void MaxSubarraySum(int a[],int n){
    int max_sum=INT_MIN;
    int sum=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(sum>max_sum){
                max_sum=sum;
            }
        }
    }
    cout<<"The Maximum subarry sum: "<<max_sum<<"\n";
}

void OPTMaxSubArraySum(int a[],int n){
    //finding cummulative Array
    int cum_a[n+1];
    cum_a[0]=0;
    for(int i=1;i<=n;i++){
        cum_a[i]=a[i-1]+cum_a[i-1];
    }
    int max_sum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=cum_a[i]-cum_a[j];
            max_sum=max(sum,max_sum);
        }
    }
    cout<<"The Maximum subarry sum: "<<max_sum<<"\n";
}

void HYPMaxSubArraySum(int a[],int n){
    //kadane's Algorithm 
    int currentSum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
        }
        max_sum=max(max_sum,currentSum);
    }
    cout<<"The Maximum subarry sum: "<<max_sum<<"\n";
}

int kadaneAlgo(int a[],int n){
    int max_curr=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<0){
            sum=0;
        }
        max_curr=max(max_curr,sum);
    }
    return max_curr;
}

void CirularMaxSubArraySum(int a[],int n){
    int wrapsum=0;
    int nwrapsum=kadaneAlgo(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+kadaneAlgo(a,n);
    cout<<"The Circular Subarray maximum sum: "<<max(wrapsum,nwrapsum)<<"\n";
}

void PairSum(int a[],int n,int s){
    int low=0,high=n-1;
    int flag=0;
    while(low<high){
       if(a[low]+a[high]==s){
           flag=1;
           cout<<"Pair exsists"<<"\n";
           break;
       }else if(a[low]+a[high]<s)
       {
           low++;
        }else if(a[low]+a[high]>s){
            high--;
        }
    }
    if(flag==0){
        cout<<"Pair doesn't exsist"<<"\n";
    }
}


int main(){
    int a[4]={-1,4,7,2};
    PrintSubarray(a,4);
    MaxSubarraySum(a,4);
    OPTMaxSubArraySum(a,4);
    HYPMaxSubArraySum(a,4);
    int b[7]={4,-4,6,-6,10,-11,12};
    CirularMaxSubArraySum(b,7); 
    int c[8]={2,4,7,11,14,16,20,21};
    PairSum(c,8,31);

    return 0;
}