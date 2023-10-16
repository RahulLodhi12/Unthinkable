// Count all prime numbers in a given range whose sum of digits is also prime
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

int summ(int n){
    int sum = 0;
    while(n){
        int d = n%10;
        sum += d;
        n = n/10;
    }
    return sum;
}

int countPrime(int l, int r){
    int cnt = 0;
    for(int i=l;i<=r;i++){
        if(isPrime(i)){
            int num = summ(i);
            if(isPrime(num)){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int l,r;
    cin>>l>>r;

    cout<<countPrime(l,r);
}