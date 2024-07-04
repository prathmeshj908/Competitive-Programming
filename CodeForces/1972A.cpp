#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int x=0,y=0;
    for(int i = 0;i<n;i++){
        if(a[i-x]>b[i]){
            ++x;
            ++y;
        }
    }
    cout<<y<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}