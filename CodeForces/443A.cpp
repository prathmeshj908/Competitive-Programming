#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    
    vector<int>a;
    for(auto &x:a){
        cin>>x;
    }
    unordered_set<char>s1(a.begin(),a.end());
    cout<<s1.size();
}