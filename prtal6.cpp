#include<iostream>
using namespace std;
// operators in c++
//binary operatior +,-,*,/,%
//unary Operator ++,--,/=
//pre incerement instant change
//post increment value temporarily preserved will be incremented 
//before next statement increases
//bit-wise operators &,|,~,^
int main(){
    int a,b,c,d;
    a=10;
    d=10;
    b=++a;
    c=d++;
    cout<<"Pre-increment: "<<b<<"\n";
    cout<<"Post-increment: "<<c<<"\n";
    int i=1,k;
    int j=2,l=1;
    i=i++ + ++i;
    k=l + j + l++ + j++ + ++l + ++j;
    int t=0;
    t=t++ - --t + ++t - t--;
    int u=1,x=2,y=3;
    int s=u-- - x-- - y--;
    cout<<"Unary ops1: "<<i<<"\n";
    cout<<"Unary ops2: "<<l<<" "<<j<<" "<<" "<<k<<endl;
    cout<<"Unary ops3: "<<t<<"\n";
    cout<<"Unary ops4: "<<u<<" "<<x<<" "<<y<<" "<<s<<"\n";

    int a_1=2,b_1=3;
    int c_1=a_1&b_1;
    int d_1=a_1|b_1;
    int e_1=~a_1;
    int f_1=a_1^b_1;
    cout<<"Bitwise ops1(and): "<<a_1<<" "<<b_1<<" "<<c_1<<"\n";
    cout<<"Bitwise ops2(or): "<<a_1<<" "<<b_1<<" "<<d_1<<"\n";
    cout<<"Bitwise ops1(not): "<<a_1<<" "<<e_1<<"\n";
    cout<<"Bitwise ops1(XOR): "<<a_1<<" "<<b_1<<" "<<f_1<<"\n";

    return 0;
}