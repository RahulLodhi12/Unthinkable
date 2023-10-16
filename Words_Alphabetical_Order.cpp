#include<bits/stdc++.h>
using namespace std;

bool mycomp(string a, string b){
	return a<b;
}

void alphabeticalOrder(vector<string> &words){
    sort(words.begin(), words.end(), mycomp);
}

int main(){
    vector<string> words;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        words.push_back(s);
    }

    cout<<"Before: "<<endl;
    for(int i=0;i<n;i++){
        cout<<words[i]<<" ";
    }
    cout<<endl;

    alphabeticalOrder(words);

    cout<<"After: "<<endl;
    for(int i=0;i<n;i++){
        cout<<words[i]<<" ";
    }
    cout<<endl;
}