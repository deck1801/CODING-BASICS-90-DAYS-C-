#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter Size of the matrix: "<<"\n";
    cin>>r>>c;
    int a[r][c],b[r][c],res[r][c];
    cout<<"Enter the element in matrix1: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The Matrix1: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter the element in matrix2: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    cout<<"The Matrix2: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    //multipication procedure
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=0;
            for(int k=0;k<c;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    cout<<"The resultant matrix: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}