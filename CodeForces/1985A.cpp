#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1 >>s2;
    char x = s1[0];
    char y = s2[0];
    s1[0] = y;
    s2[0] = x;
    cout<<s1<<" "<<s2<<"\n";
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