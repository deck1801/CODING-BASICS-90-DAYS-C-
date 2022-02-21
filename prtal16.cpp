#include<iostream>
#include<string>
using namespace std;
//OOPS in C++: Object Oriented Programming
//Class is a blueprint
//object is an instance of the class
//Attributes calles Data members of the class

class student{
    //by default data members are private in nature
    int Marks; //private data member
    public:
        string name;
        int age;
        bool gender;

        void setMarks(int m){ //way to access the private content
            Marks=m;
        }
        
        void PrintFunc(){
            cout<<"Data of student: "<<"\n";
            cout<<"Name: "<<name<<"\n";
            cout<<"Age: "<<age<<"\n";
            cout<<"gender: "<<gender<<"\n";
            cout<<"Marks: "<<Marks<<"\n";
            cout<<"\n";
        }
};

class Profile{
    string name;
    int age;
    bool gender;
    
    public:
    //default constructor only invoked with object creation
    Profile(){
        cout<<"There is a data present for students"<<"\n";
    }
    //Constructor with perimeters(Parameterized constructor)
    Profile(string n,int a,bool g){
        name=n;
        age=a;
        gender=g;
    }
    //Copy Constructor
    //deep copy
    Profile(Profile &s){
        name=s.name;
        age=s.age;
        gender=s.gender;
    }

    ~Profile(){
        cout<<"The Destructor has been called"<<"\n";
    }
    
    void display(){
        cout<<"Name of the student: "<<name<<"\n";
        cout<<"Age of the student: "<<age<<"\n";
        cout<<"Gender of the student: "<<gender<<"\n";
        cout<<"-----------------------------------"<<"\n";
        cout<<"\n";
    }

    //operator overloading: used for instance operation
    bool operator == (Profile &p){
        if(name==p.name && age==p.age && gender==p.gender){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    //array of objects
    student arr[3];
    Profile p; //default constructor invoked
    Profile p1("Divyajyoti",22,1); //parameterized constructor invoked 
    p1.display(); //public memeber function
    Profile p2("Avichal",23,1);
    p2.display();
    Profile p3("Priya",22,0);
    p3.display();
    Profile c=p1; //Copy consrtuctor will be invoked
    c.display();
    if(c==p1){
        cout<<"The data has been replicated"<<"\n";
    }else{
        cout<<"The data not replicated"<<"\n";
    }
    if(p1==p2){
        cout<<"Data is redundant"<<"\n";
    }else{
        cout<<"Data is unique"<<"\n";
    }

    return 0;
}