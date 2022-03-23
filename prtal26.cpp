#include<bits/stdc++.h>
using namespace std;


string FormBiggest(string s){
    sort(s.begin(),s.end(),greater<int>());
    return s;
}

void MaxOccuring(string s){
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    
    char ans='a';
    int maxF=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
    cout<<"The maximum frequency: "<<maxF<<" "<<ans<<"\n";

}



int main(){
    string str="Divyajyoti";
    //conversion to upper case(native)
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<"Upper case: "<<str<<"\n";

    //conversion to lower chase(native)
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<"Lower Case: "<<str<<"\n";
    
    //using functions for conversions
    string str1="DeepteshJyoti";
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<<"The Upper: "<<str1<<"\n";
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    cout<<"The Lower: "<<str1<<"\n";
    
    //formation of biggest number from string
    string str2="12347854";
    cout<<"The biggest number formed: "<<FormBiggest(str2)<<"\n";
    
    //Maximum occuring character in string
    MaxOccuring(str1);
    
    
    return 0;
}