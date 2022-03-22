#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
    string str; //TYPE-1
    cout<<"Enter the string: "<<"\n";
    cin>>str;
    cout<<"Output: "<<str<<"\n";
    
    string str1(4,'n'); //TYPE-2
    cout<<"Output 1: "<<str1<<"\n";

    string str2="ApniKaksha"; //TYPE-3
    cout<<"Output 2: "<<str2<<"\n";

    string str3; //TYPE-4
    cin.ignore();
    getline(cin,str3);
    cout<<"Output 3: "<<str3<<"\n";
    
    string s1="fam",s2="ily";
    s1.append(s2);
    cout<<"The append operation: "<<s1<<"\n"; //change in s1
    cout<<"The concatenation: "<<s1+s2<<"\n"; //no change in variables
    
    string str4="Divyajyoti";
    cout<<"The string-1: "<<str4<<"\n";
    cout<<"Accessign the value from specific position: "<<str4[1]<<"\n";

    string str5="ABC";
    cout<<"The string-2: "<<str5<<"\n";
    str5.clear(); //delete whole string
    cout<<"The use of CLEAR Function: "<<str5<<"\n";

    string s3="abc",s4="xyz";
    cout<<"Comparing the strings: "<<s3.compare(s4)<<"\n";
    //if they are equal the output will be zero
    
    string s5="Divya";
    if(s5.empty()){
        cout<<"String is empty"<<"\n";
    }else{
        cout<<"String is not empty"<<"\n";
    }
    
    string s6="Divyajyoti";
    s6.erase(1,3); //erasing at specific position
    cout<<"The String after delete operation: "<<s6<<"\n";
    
    string s7="Deepteshjyoti"; //finding sub-string in string
    cout<<"The element present at start Postition: "<<s7.find("eept")<<"\n";
    s7.insert(4,"Pagal"); //Inserting sub-string at particular position
    cout<<"After inserting element: "<<s7<<"\n";
    cout<<"Length of the string: "<<s7.length()<<"\n";
    //looping over the string 
    for(int i=0;i<s7.length();i++){
        cout<<s7[i]<<" ";
    }
    cout<<"\n";
    
    string s_s7=s7.substr(3,4); //extracting the substring
    cout<<"The extracted substring from the string: "<<s_s7<<"\n";
    
    string s8="786";
    int x8=stoi(s8); //converting string to array
    cout<<"String converted to integer: "<<x8<<"\n";
    
    int x9=9872;
    string str9=to_string(x9);
    cout<<"Integer converted to string: "<<str9<<"\n";
    
    //sorting the string
    string s10="divyajyoti";
    sort(s10.begin(),s10.end());
    cout<<"The Sorted string: "<<s10<<"\n";
    


    
    




    return 0;
} 