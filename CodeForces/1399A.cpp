#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        
        for(int i =0; i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        sort(a.begin(), a.end());
		bool ok = true;
		for (int i = 1; i < n; ++i) {
			ok &= (a[i] - a[i - 1] <= 1);
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
    return 0;
}