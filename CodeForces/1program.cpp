#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    while(cin>>a >>b >>c){
    if(a+b >=10 || a+c >=10 || b+c >=10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}

// Checker Log
//  5 token(s): yes count is 3, no count is 2