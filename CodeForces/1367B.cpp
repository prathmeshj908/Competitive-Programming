#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>even;
    vector<int>odd;
    for(auto &x:v){
        cin>>x;
    }
    for(int i = 0; i<n;i++){
        if(i%2 == 0){
            if(v[i] % 2 != 0){
                even.push_back(i);
            }
        }
        else if(i%2 != 0){
            if(v[i] % 2 == 0){
                odd.push_back(i);
            }
        }
    }
    int cnt = 0;
    int i = 0;
    int j = i+1;
    for(int i = 0; i<n-1;i++){
        if(v[i] != 0 && v[j] ==0)cnt++;
    }
    if(even.size() != odd.size()){
        cout<<-1<<endl;
    }
    else cout<<even.size()<<"\n";

    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}