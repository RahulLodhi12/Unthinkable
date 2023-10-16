#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int len = 0;
    int maxi = 0;
    for(int i=0;i<s.size();i++){
        len++;
        if(s[i] == '@' || s[i] == '$'){
            // cout<<len<<" ";
            maxi = max(maxi,len);
            len = 0;
        }
    }
    cout<<maxi;
}