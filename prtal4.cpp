//loops in C++

#include<iostream>
using namespace std;

int sumofseries(int range){
    int sum=0;
    for(int i=1;i<=range;i++){
        sum=sum+i;
    }
    return sum;
}

int sumSeries(int a){
    int sum=0;
    while(a>0){
        sum=sum+a;
        a--;
    }
    return sum;
}

int dosumseries(int a){
    int sum=0;
    do{
        sum=sum+a;
        a--;
    }while(a>0);
    return sum;
}


int main(){
    cout<<"Sum of Series: "<<sumofseries(10)<<"\n";
    cout<<"Sum of Series(While): "<<sumSeries(10)<<"\n";
    cout<<"Sum of Series (Do-While): "<<dosumseries(10)<<"\n";
    return 0;
}