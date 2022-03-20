#include<bits/stdc++.h>
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

void TransposeMatrix(int a[ul][ll],int m,int n){
    int Trans[ul][ll];
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                Trans[j][i]=a[i][j];
            }
        }
        cout<<"The Transpose Matrix: "<<"\n";
        Print2DArray(Trans,m,n);
    }else{
        cout<<"Transpose not possible"<<"\n";
    }
    
}

void MatrixMultiplication(int a[ul][ll],int b[ul][ll],int n1,int n2,int n3,int n4){
    if(n2!=n3){
        cout<<"Multiplication Impossible"<<"\n";
    }
    else{
        int ans[ul][ll];
        for(int i=0;i<n1;i++){
            for(int j=0;j<n3;j++){
                for(int k=0;k<n2;k++){
                    ans[i][j]+=a[i][k]*a[k][j];
                }
            }
        }
        cout<<"The Product of Matrix: "<<"\n";
        Print2DArray(ans,n1,n4);
    }
}

void Matrix2DSearch(int a[ul][ll],int n1,int n2){
    int s;
    cout<<"Enter the searching element: "<<"\n";
    cin>>s;
    //the row and column must be sorted
     int r=0,c=n2-1,flag=0;
     while(r<n1 && c>=0){
         if(a[r][c]==s){
             flag=1;
             cout<<"Search successfull"<<"\n";
             break;
         }else if(a[r][c]>s){
             c--;
         }else{
             r++;
         }
     }
     if(flag==0){
         cout<<"Search unsuccessfull"<<"\n";
     }

}








int main(){
    int a[ul][ll],n1=3,n2=4;
    int b[ul][ll],n3=4,n4=3;
    Input2DArray(a,n1,n2);
    Input2DArray(b,n3,n4); 
    TransposeMatrix(a,n1,n2);
    MatrixMultiplication(a,b,n1,n2,n3,n4);
    Matrix2DSearch(a,n1,n2);
    
    return 0;
}  