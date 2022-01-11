#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the size of the array: "<<"\n";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter the element in matrix: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The Matrix: "<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    


    return 0;
}