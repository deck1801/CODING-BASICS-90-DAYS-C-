#include<iostream>
#include<string>
using namespace std;

//OOPs Concept: Ploymorphism
//function Overloadimg:Same name different functionality

class over{
    public:
        //first without arguments
        void sum(){
            cout<<"So this function add two elements"<<"\n";
        }
        //With arguments
        int sum(int a,int b){
            return a+b;
        }
        
};

//Operator Overloading: creating operator functionality to work with different instances of a class

class Complex{
    private:
        int real,imag;
    public:
        Complex(int r=0,int i=0){
            real=r;
            imag=i;
        }
        //Operator overloading function
        Complex operator + (Complex const &obj){ 
            Complex res;
            res.imag=imag + obj.imag;
            res.real=real + obj.real;
            return res;
        }
    
        void display(){
            cout<< real <<" + i"<<imag<<"\n";
        }
};

class Base{
    public:
        virtual void print(){
            cout<<"This is the base class's print function"<<"\n";
        }
        virtual void display(){
            cout<<"This is the base class's display function"<<"\n";
        }
};
//In this case public and protected part of Base will inherited in public part derived
class derived: public Base{
    public:
        void print(){
            cout<<"This is the derived class's print function"<<"\n";
        }
        void display(){
            cout<<"This is the derived class's display function"<<"\n";
        }

};




int main(){
    over o;
    o.sum();//first function
    o.sum(5,6); //second functionn
    cout<<"\n";
    cout<<"\n";
    cout<<"Addition of Complex Number: "<<"\n";
    Complex c1(12,7),c2(3,4);
    Complex c3=c1+c2;
    c3.display();
    cout<<"\n";
    cout<<"Display the function of virtual function: "<<"\n";
    Base *baseptr;
    derived d;
    baseptr=&d;//we have to use virtual keyword before base function in order to bind at runtime
    baseptr->print();
    baseptr->display();
    
    
    return 0;
}