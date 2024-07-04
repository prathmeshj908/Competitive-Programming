#include <iostream> 
#include <vector>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        for(int i = 0;i<3;i++){
            if(isupper(s[i])) s[i] = tolower(s[i]);
        }
        if(s == "yes")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}