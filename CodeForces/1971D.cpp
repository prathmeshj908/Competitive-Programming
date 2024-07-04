#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int cnt = 1;
    int i=0,j=i+1;
    for(int i = 1;i<s.size();i++){
        if(s[i] !=s[i-1]) cnt+=1;
    }
    if(cnt == 1){
        cout<<1<<"\n";
    continue;
    }
    if(cnt == 2 && s[0] == '1'){ 
        cout<<2<<"\n";
        continue;
    }
    cout<<cnt-1<<"\n";
    }
}
