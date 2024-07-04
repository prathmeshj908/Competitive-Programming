#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> cnt;
        for(int i=0; i<n; ++i) {
            cin>>a[i];
            cnt[a[i]]++;
        }
        int ans = 0;
        for(auto [x,y]:cnt) {
            ans+=y/3;
        }
        cout<<ans<<'\n';
    }
}
