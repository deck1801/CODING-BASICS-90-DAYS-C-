#include<bits/stdc++.h>
using namespace std;

//Recursion: Important + Very essential

int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}

int Power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower=Power(n,p-1);
    return n*prevPower;
}

int Factorial(int n){
    if(n==0){
        return 1;
    }
    int prevFact=Factorial(n-1);
    return n*prevFact;
}

int Fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);
}

void NormalFibonacci(int n){
    int f1=0,f2=1;
    cout<<f1<<" "<<f2<<" ";
    int f3;
    for(int i=0;i<=n-2;i++){
        f3=f1+f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
    }
    cout<<"\n";
}

bool SortArray(int arr[],int n){
    if(n==1){
        return true;
    }
    bool nextarray=SortArray(arr+1,n-1);
    return (arr[0]<arr[1] && nextarray);
}

void DpNum(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    DpNum(n-1);
}

void IpNum(int n){
    if(n==0){
        return;
    }
    IpNum(n-1);
    cout<<n<<" ";
}

int FirstOCC(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return FirstOCC(arr,n,i+1,key);
}

int LastOCC(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int presult= LastOCC(arr,n,i+1,key);
    if(presult!=-1){
        return presult;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}


int main(){
    cout<<"Recursion 1:Sum of numbers = "<<Sum(10)<<"\n";
    cout<<"Recursion 2:Power of a number = "<<Power(2,5)<<"\n";  
    cout<<"Recursion 3:Factorial of a number = "<<Factorial(5)<<"\n";
    cout<<"Recursion 4:Fibonacci of a number = "<<Fibonacci(5)<<"\n";
    cout<<"Normal Fibonacci Series: "<<"\n";
    NormalFibonacci(5);
    int arr[5]={5,4,3,2,1};
    cout<<"Print arr: "<<*(arr)<<"\n";
    cout<<"Print arr+1: "<<*(arr+1)<<"\n";
    cout<<"Recusrion 5: Check Sorted Array = "<<SortArray(arr,5);
    cout<<"Recursion 6: Decresing order number = "<<"\n";
    DpNum(5);
    cout<<"\n";
    cout<<"Recusrion 7: Increasing order number = "<<"\n";
    IpNum(5);
    cout<<"\n";
    int arr1[6]={4,2,1,2,2,7};
    cout<<"Recursion 8: First Occurence in array = "<<FirstOCC(arr1,6,0,2)<<"\n";
    cout<<"Recursion 9: Last Occurence in array = "<<LastOCC(arr1,6,0,2)<<"\n";


    return 0;
}