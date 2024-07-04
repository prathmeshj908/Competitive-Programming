// A. Minutes Before the New Year
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m >>n;
        cout<<(24*60)-((60*m)+n)<<'\n';
    }
}