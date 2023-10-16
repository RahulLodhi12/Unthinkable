#include<bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();
    int i = 0;
    while(i<n){
        for(int j=0;j<m && i<n;j++){
            cout<<mat[i][j]<<" ";
        }
        i++;
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int> (m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    spiralMatrix(mat);
}