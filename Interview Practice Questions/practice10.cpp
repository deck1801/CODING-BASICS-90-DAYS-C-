#include<iostream>
using namespace std;

int main(){
    int r,unit,n;
    cout<<"Enter the no. of mouse in area: "<<"\n";
    cin>>r;
    cout<<"Unit of food the eat: "<<"\n";
    cin>>unit;
    cout<<"Enter the size of food storage:"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"The enter the quantity of each storage: "<<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int qty_rat=r*unit;
    int qty_sum=0,count=0,flag=0;
    for(int i=0;i<n;i++){
        qty_sum+=arr[i];
        if(qty_sum>=qty_rat){
            flag=1;
            count++;
            break;
        }else{
            flag=0;
            count++;
        }
    }
    if(flag==1){
        cout<<"Qty Achived: "<<count<<"\n";
    }else{
        cout<<"Qty not Achived"<<"\n";
    }
    

    return 0;
}

