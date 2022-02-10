#include<iostream>
#include<math.h>
using namespace std;

void Distanceinpoint(int x1,int y1,int x2,int y2){
    float distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"The distance: "<<distance<<"\n";
}

int main(){
    int x1=1,x2=2,x3=3,y1=1,y2=4,y3=6;
    Distanceinpoint(x1,y1,x2,y2);
    Distanceinpoint(x2,y2,x3,y3);
    Distanceinpoint(x3,y3,x1,y1);
   
    return 0;
}