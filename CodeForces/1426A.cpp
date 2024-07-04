#include <iostream>
using namespace std;

void solve(){
    int n,x,a;
    cin>>n >>x;
    if(n <= 2){
    cout<<1<<"\n";
    }
    else{
     a = n - 2;
    if(a % x == 0)
    cout<<(a/x)+1<<"\n";
    else cout<<(a/x)+2<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}