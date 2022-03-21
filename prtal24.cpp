#include<bits/stdc++.h>
using namespace std;
//Concepts of Pointer

void Vswap(int *a,int *b){ //Theparameters are int pointers
    int temp=*a;
    *a=*b;
    *b=temp;
}

void increment(int *a){
    (*a)++;
    cout<<*a<<"\n";
}


int main(){
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<"The address of variable a: "<<&a<<"\n";
    cout<<"The value of pointer: "<<aptr<<"\n";
    cout<<"The derefrencing of a pointer: "<<*aptr<<"\n";
    *aptr=20;
    cout<<"The change of value in variable a: "<<a<<"\n";
    //this show the access of pointer towards the real variable

    //pointer arithmatic ++,--,+,-
    cout<<"Operation of increment in pointer: "<<aptr++<<"\n";
    
    //Pointers and Array
    int arr[3]={10,20,30}; //arr is basically storing the address of array
    cout<<*arr<<"\n"; //prints 0th element
    
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";  //arr is a indexing pointer so it moves to 
        //different index not different address
        //arr++ illegal
    }


    //pointer to pointer
    int b=10;
    int *p;
    p=&a;
    cout<<*p<<"\n";

    int **q=&p; //pointer to store the address of the pointer
    cout<<*q<<"\n";//print address of a
    cout<<**q<<"\n";//print value of a

    //Pointer application 
    int c=2;
    int d=4;
    //Vswap(c,d); no change in the result
    int *cptr,*dptr;
    cptr=&c; dptr=&d;
    Vswap(cptr,dptr);
    cout<<c<<" "<<d<<endl;
    increment(cptr);
    return 0;
} 