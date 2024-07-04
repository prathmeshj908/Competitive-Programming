// A. Way Too Long Word
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        int n = s.size();
        if(n<=10) ans = s;
        else{
            ans.push_back(s[0]);
            ans +=to_string(n-2);
            ans.push_back(s[n-1]);
        }
        cout<<ans<<endl;
    }
}