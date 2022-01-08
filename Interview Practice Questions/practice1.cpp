#include<iostream>
using namespace std;
//Calculate greatest common divisor of two numbers

int gcdNormal(int a,int b){
    int gcd=0;
    if(b>a){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int gcdRec(int a,int b){
    if(a==0){
        return a;
    }
    if(b==0){
        return b;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcdRec(a-b,b);
    }else{
        return gcdRec(a,b-a);
    }
}

int gcdRecThree(int a,int b,int c){
   int maxi=0;
   maxi=max(a,max(b,c));
   for(int i=maxi;i>1;i--){
      if((a%i==0) && (b%i==0) && (c%i==0) )
      {
          return i;
          break;
      } 
   }
   return 1;
}

int main(){
    
    cout<<"Greatest Common Divisor normal: "<<gcdNormal(5,10)<<"\n";
    cout<<"Greatest Common Divisor reccursion: "<<gcdRec(5,10)<<"\n";
    cout<<"Greatest Common Divisor 3 numbers: "<<gcdRecThree(5,10,20)<<"\n";
    return 0;
}