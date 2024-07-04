#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,a,b,c;
    cin>>n;
    int S=1000;
		cout<<S<<" ";
		for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			S+=x;
			cout<<S<<" ";
		}
		cout<<"\n";
}

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
}