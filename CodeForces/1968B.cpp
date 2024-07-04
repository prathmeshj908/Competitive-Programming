#include <iostream>
#include <string>
using namespace std;

void solve(){
    int n,n1;
    cin>>n >>n1;
    string s1,s2;
    cin>>s1 >>s2;
    int p= 0, p1=0;
    while(p<n1){
        while(p1 < n1 && s1[p] != s2[p1] ){
            p1+=1;
        }
        if(p1<n1) p+=1,p1+=1;
        else break;
    }
    cout<<p<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}