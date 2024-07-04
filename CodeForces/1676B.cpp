#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum = 0;
    vector<int>v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++){
        if(v[i] != 1) sum+=v[i]-1;
    }
    cout<<sum<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}