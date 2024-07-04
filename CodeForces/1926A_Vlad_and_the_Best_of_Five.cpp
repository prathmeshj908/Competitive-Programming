#include <iostream>
#include <string.h>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> ump;
        for(char x: s){
            ump[x]++;
        }
        char p ;
        if(ump['A'] > ump['B']) p = 'A';
        else p = 'B';
        cout<<p<<"\n";
    }
}