#include<iostream>
#include<string>
using namespace std;
//remove vowels from the string
int main(){
    string str="Divyajyoti is the front end developer";
    string vow="aeiouAEIOU";
    cout<<"The String: "<<str<<endl;
    string newstr="";
    int len=str.length();
    cout<<"The Length of the string: "<<str.length()<<endl;
    for(int i=0;i<len;i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
           for(int j=i;j<len;j++){
               str[j]=str[j+1];
           }
           i--;
           len--;
       }
    }
    cout<<"The String After Operation: "<<str<<"\n";
    return 0;
}