#include<bits/stdc++.h>
using namespace std;

void FindAutoCount(string str){
    int sum=0;
    set <char>st; //starnder for unique keys
    for(int i=0;i<str.length();i++){
        sum+=str[i]-'0';
        st.insert(str[i]);
    }
    cout<<"Sum: "<<sum<<"\n";
    cout<<st.size()<<"\n";
    if(sum!=str.length()){
        cout<<"No";
    }else{
        cout<<st.size()<<"\n";
    }

}


int main(){
    string str="1210";
    FindAutoCount(str);
    return 0;
}