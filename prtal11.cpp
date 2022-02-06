#include<iostream>
#include<math.h>
#include<string>
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
        dec+=pow(2,count)*rev;
        count++;
        binary/=10;
    }
    cout<<"Decimal Conversion of Binary: "<<dec<<"\n";
    cout<<"\n";
}

//Conversion: decimal to Octadecimal / Ocatadecimal to decimal
void ConvDtoO(int decimal){
    int octal=0;
    while(decimal!=0){
        int rem=decimal%8;
        octal=octal*10+rem;
        decimal/=8;
    }
    octal=octal*10+decimal;
    cout<<"Octal conversion of Decimal: "<<octal<<"\n";
}
void ConvOtoD(int octal){
    int dec=0,count=0;
    while(octal!=0){
        int rev=octal%10;
        dec+=pow(8,count)*rev;
        count++;
        octal/=10;
    }
    cout<<"Decimal conversion of Octal: "<<dec<<"\n";
    cout<<"\n";
}

//Conversion: decimal to Hexadecimal / Hexadecimal to decimal
void ConvDtoH(int decimal){
    string hexa;
    while(decimal!=0){
        int rem=decimal%16;
        if(rem>=10){
            hexa+=char(rem+55);
        }
        else{
            hexa+=to_string(rem);
        }
        decimal/=16;
    }
    hexa=string(hexa.rbegin(),hexa.rend());
    cout<<"Hexadecimal conversion of Decimal: "<<hexa<<"\n";
}
void ConvHtoD(string hexa){
    int i=hexa.length()-1,dec=0,counter=0,hex;
    while(i>=0){
        hex=int(hexa[i]-'0');
        if(hex<=9){
            dec+=pow(16,counter)*hex;
            counter++;
        }else{
            hex=hex-7;
            dec+=pow(16,counter)*hex;
            counter++;
        }
        i--;
    }
    cout<<"Decimal conversion of Hexadecimal: "<<dec<<"\n";
    cout<<"\n";
}

//Sum of Binary Numbers
void SumOfBin(int bin1,int bin2){
    int result= bin1|bin2;
    cout<<"The Sum of binary numbers: "<<result<<"\n"; //wrong answer
    cout<<"\n";
}




int main(){
    ConvDtoB(10);
    ConvBtoD(1010);
    ConvDtoO(32);
    ConvOtoD(40);
    ConvDtoH(1235);
    ConvHtoD("4D3");
    SumOfBin(1010,1000);
    return 0;
}