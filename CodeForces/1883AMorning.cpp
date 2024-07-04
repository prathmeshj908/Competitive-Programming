#include <iostream>
#include <string.h>
#include <map>
#include <climits>
using namespace std;

map<int, int>mp;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = 4;
        for(int i = '1'; i<='9';i++){
            mp[i] = i - '0';
        }
        mp['0'] = 10;
        char p = '1';

        for(char x:s){
            ans+=abs(mp[p] - mp[x]);
            p = x;
        }
        cout<<ans<<endl;
    }
}
