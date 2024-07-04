#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a >>b;
        bool found = false;
        for(int i =0;i<a.size()-1;i++){
            if(a[i]=='0' && b[i] == '0' && a[i+1] == '1' && b[i+1] == '1'){
                found = true;
                break;
            }
        }
        if(found == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}