#include<iostream>
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







int main(){
    //array of objects
    student arr[3];
    for(int i=0;i<3;i++){
        int m;
        cout<<"Enter Name of the student: "<<"\n";
        cin>>arr[i].name;
        cout<<"Enter the Age of the student: "<<"\n";
        cin>>arr[i].age;
        cout<<"Enter the Gender of the student: "<<"\n";
        cin>>arr[i].gender;
        cout<<"Enter the Marks of the student: "<<"\n";
        cin>>m;
        arr[i].setMarks(m);
        cout<<"\n";
    }
    
    for(int i=0;i<3;i++){
        arr[i].PrintFunc();
    }
    

    return 0;
}