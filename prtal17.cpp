#include<iostream>
#include<string>
using namespace std;

//PolyMorphism
class stud1{
    public:
        void fun(){
            cout<<"Data has been transfered"<<"\n";
        }
        void fun(int x){
            cout<<"Argument Function"<<"\n";
        }
};




int main(){
    stud1 st;
    st.fun();
    return 0;
}