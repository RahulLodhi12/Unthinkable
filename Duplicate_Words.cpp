#include<bits/stdc++.h>
using namespace std;

void duplicate(vector<string> &words){
    unordered_set<string> sett;
    
    for(int i=0;i<words.size();i++){
        if(sett.find(words[i]) != sett.end()){ //found it
            cout<<words[i]<<" ";
        }
        else{
            sett.insert(words[i]);
        }
    }
}

int main(){
    vector<string> words;
    int n;
    cin>>n;

    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        words.push_back(s);
    }

    duplicate(words);
}