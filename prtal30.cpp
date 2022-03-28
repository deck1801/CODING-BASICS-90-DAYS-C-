#include<bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes: A way to find prime number in range

void SEPrime(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    cout<<"The Result of Sieve of Eratosthenes: "<<"\n";
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

void SEPrimeFactor(int n){
    cout<<"Seive of Eratosthenes Prime factor: "<<"\n";
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }

}

int main(){
    int n;
    cout<<"Enter the range: "<<"\n";
    cin>>n;
    SEPrime(n);
    SEPrimeFactor(n);
     
    return 0;
}
