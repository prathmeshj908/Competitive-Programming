#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v1(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    v1=v;
    sort(v1.begin(),v1.end());
    int max = v1[n-1];
    int smax=v1[n-2];
    for(int i = 0;i<n;i++){
        if(v[i] != max){
            cout<<v[i]-max<<" ";
        }
        else{
            cout<<max-smax<<" ";
        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}