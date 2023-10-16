#include<bits/stdc++.h>
using namespace std;

int substringCount(string s){
    int cnt = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]+1 == s[i+1]){
            cnt++;
            i++;
        }
    }
    return cnt;
}

int main(){
    string s;
    cin>>s;

    cout<<substringCount(s);
}