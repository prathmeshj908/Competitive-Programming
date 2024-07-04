#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a >>b >>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    int x = v[1];
    int sum = 0;
    for(int i = 0;i<3;i++){
        sum+=abs(v[i]-x);
    }
    cout<<sum<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}