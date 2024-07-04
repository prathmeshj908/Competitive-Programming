#include <iostream> 
using namespace std;

void solve(){
    int n,x,y,sum1,sum2;
    cin>>n;
    x = n/2;
    y = n/3;
    sum1 = x*(x-1)/2;
    sum2 = y*(y-1)/2;
    if(n == 3)cout<<n<<"\n";
    else if(n == 2)cout<<n<<"\n";
    else if(n ==1)cout<<2<<"\n";
    else if(sum1 > sum2) cout<<2<<"\n";
    else cout<<3<<"\n";
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