#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a = n%10;

    int cnt = 0;
    while(n>0){
        cnt+=1;
        n/=10;
    }
    int x = a*(10);
    if(cnt == 1) cout<<x-9<<"\n";
    else if(cnt == 2) cout<<x-7<<"\n";
    else if(cnt == 3) cout<<x-4<<"\n";
    else cout<<x<<"\n";

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}