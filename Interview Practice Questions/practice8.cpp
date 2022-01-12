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
    int maxarr[r];
    int counter=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c-1;j++){
            if(a[i][j]<a[i][j+1]){
                int max=a[i][j+1];
                maxarr[counter]=max;
                counter++;
            }
        }
    }
    cout<<"The max element from each row: "<<"\n";
    for(int i=0;i<r;i++){
        cout<<maxarr[i]<<" ";
    }


    return 0;
}