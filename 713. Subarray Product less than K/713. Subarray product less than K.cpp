#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,1,1};
    int size = v.size();
    int k = 1;
    int ans = 0, p = 1;
    for(int i = 0 , j = 0; j < size; j++){
        p *= v[j];
        while(i<=j && p>=k){
            p /= v[i];
            i++;
        }
        ans += (j - i + 1);
    }
    cout<<ans<<endl;
}
