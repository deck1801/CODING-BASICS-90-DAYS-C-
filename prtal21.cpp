#include <bits/stdc++.h>
using namespace std;
#define ul 50
#define ll 50

void Print2DArray(int a[ul][ll],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Input2DArray(int a[ul][ll],int m,int n){
    cout<<"Enter the element in the Matrix:"<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The Input Matrix: "<<"\n";
    Print2DArray(a,m,n);
}

void SearcInMatrix(int a[ul][ll],int m,int n){
    cout<<"Enter The searcing element: "<<"\n";
    int s;
    cin>>s;
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==s){
                cout<<"Search Successfull"<<"\n";
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"Search Unsucessfull"<<"\n";
    }
}

void SpiralOrderTreversal(int a[ul][ll],int n,int m){
    cout<<"Traversal of Matrix in spiral method: "<<"\n";
    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
        //for row-start
        for(int col=col_start;col<=col_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //for column-end
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][col_end]<<" ";
        }
        col_end--;
        //for row-end
        for(int col=col_end;col>=col_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        //for column-start
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][col_start]<<" ";
        }
        col_start++;
    }
}


int main(){
    int a[ul][ll], m=5, n=6;
    Input2DArray(a,m,n);
    SpiralOrderTreversal(a,m,n);
    return 0;
}