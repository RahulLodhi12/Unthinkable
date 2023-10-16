#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1 || n==0){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool isDigitPrime(int n){
    bool flag = true;
    while(n){
        int d = n%10;
        if(!isPrime(d)){
            flag = false;
            return flag;
        }
        n = n/10;
    }
    return flag;
}

int main(){
    int left, right;
    cin>>left>>right;

    int cnt=0;
    for(int i=left;i<=right;i++){
        if(isPrime(i)){
            if(isDigitPrime(i)){
                cnt++;
            }
        }
    }

    cout<<cnt;
}