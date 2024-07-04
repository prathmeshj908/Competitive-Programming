#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a >>b >>c;
    if((a+b+c)%2){
        cout<<-1<<"\n";
        return;
    }
    cout<<min((a+b),(a+b+c)/2)<<"\n";
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