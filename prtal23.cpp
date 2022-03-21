#include<bits/stdc++.h>
using namespace std;
#define var 98
#define Lvar 50

int StringLength(char arr[var]){
    int i=0;
    int count=1;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}


void StringPalindrome(char arr[var],int n){
    arr[n+1];
    bool check=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"It is Palindrome"<<"\n";
    }else{
        cout<<"It is not a plaindrome"<<"\n";
    }
}

void LargestWordSentence(char arr[var]){
    int i=0;
    int currLen=0,maxLen=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;
        }
        else
        currLen++;
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<"The length of largest word in the sentence: "<<maxLen<<"\n";
}



int main(){
    char arr[100]="apple";
    cout<<"Printing each element sperately: "<<"\n";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"\n";
    char word[var];
    cout<<"Enter the string: "<<"\n";
    cin>>word;
    cout<<"The string: "<<word<<"\n";
    cout<<"Accessing the second character: "<<word[1]<<"\n";
    char word2[var]="Divya";
    StringPalindrome(word2,5);
    char Sen[30];
    cout<<"Enter the sentence: "<<"\n";
    cin.getline(Sen,30);
    cin.ignore();
    cout<<Sen<<"\n";
    LargestWordSentence(Sen);

    return 0;
}