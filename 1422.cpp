#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "011101";
    int size = s.size();
    int ans = INT_MIN;
    string left, right;
    vector<vector<string>> finale;
    for(int i=0;i<size;i++){
        left = s.substr(0,i+1);
        right = s.substr(i+1,size);
        finale.push_back({left,right});
    }
    int l = 0, r = 0;
    for(int i=0;i<finale.size();i++){
        for(int j=0;j<finale[0].size();j++){
            
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            cout<<finale[i][j]<<" ";
        }
        cout<<endl;
    }
}
