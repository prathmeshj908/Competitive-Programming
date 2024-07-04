#include <iostream>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a >>b >>c;
    if(c%a < b){
        cout<<(((c/a)-1)*a)+b<<"\n";
    }
    else cout<<((c/a)*a)+b<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}