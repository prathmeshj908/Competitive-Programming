#include <iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x >> y;
    if(x<y){
        cout<<x<<" "<<y<<"\n";
    }
    else cout<<y<<" "<<x<<"\n";
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

