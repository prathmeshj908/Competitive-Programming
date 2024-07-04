#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve(){
    int a ,b ,c,d;
    cin>>a >> b >>c >>d;
    vector<int>v={1,2,3,4,5,6,7,8,9,10,11,12};
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(a>c) swap(a,c),swap(b,d);
    if((a <= c && b >= c && b<=d))cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
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