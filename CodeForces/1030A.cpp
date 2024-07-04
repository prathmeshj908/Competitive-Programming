#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(auto &x:A){
        cin>>x;
    }
    int cnt = 0;
    for(int x:A){
        if(x == 1){cnt+=1;
        break;
        }
    }
    if(cnt == 1)cout<<"HARD";
    else cout<<"EASY";
    return 0;
}