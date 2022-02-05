#include<iostream>
#include<math.h>
using namespace std;

//sum of first n natural numbers
void PrintSumRange(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<"Sum of Natural numbers: "<<sum<<"\n";
    cout<<"\n";
}

//check python triplet
void PrintPythonTriplet(int h,int p,int b){
    if(pow(h,2)==(pow(b,2)+pow(p,2))){
        cout<<"It is a Python Triplet: "<<h<<","<<p<<","<<b<<"\n";
    }else{
        cout<<"Not a Python Triplet"<<"\n";
    }
}

//Conversion: decimal to binary / Binary to decimal
void ConvDtoB(int decimal){
    int binary=0;
    while(decimal!=0){
        int rem=0;
        rem=decimal%2;
        binary=binary*10+rem;
        decimal/=2;
    }
    binary=binary*10+decimal;
    cout<<"Binary conversion of Decimal: "<<binary<<"\n";
}
void ConvBtoD(int binary){
    int count=0;
    int dec=0;
    while(binary!=0){
        int rev=binary%10;
        dec+=pow(rev,count);
        count++;
        binary/=10;
    }
    cout<<"Decimal Conversion of Binary: "<<dec<<"\n";
    cout<<"\n";
}




int main(){
    ConvDtoB(10);
    ConvBtoD(1010);
    return 0;
}