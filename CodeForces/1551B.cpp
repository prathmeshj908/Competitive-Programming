#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(){
    string s1;
    cin>>s1;
    vector<int>v(26,0);
    for(int i = 0 ;i <s1.size();i++){
        v[s1[i]-'a']++;
    }
    int cnt = 0;
    int cnt1=0;
    for(int i =0;i<v.size();i++){
        if(v[i] == 1)cnt+=1;
        else if(v[i] > 0)cnt1+=1;
    }
    cout<<cnt1+(cnt)/2<<"\n";
    

    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}