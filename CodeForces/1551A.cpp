#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n % 3 == 0){
        cout<<n/3<<' '<<n/3<<"\n";
    }
    else if(n % 3 == 1) cout<<(n/3)+1<<" "<<n/3<<"\n";
    else cout<<(n/3)<<" "<<(n/3)+1<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}