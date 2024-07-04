#include <iostream> 
using namespace std;

int main(){
    int n,a ;
    cin>>n >>a;
    while(a>0){
        if(n % 10 == 0){
            n/=10;
            a-=1;
        }
        else{
            n-=1;
            a-=1;
        }
    }
    cout<<n;
}