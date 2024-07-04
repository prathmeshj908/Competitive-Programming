// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main(){
//      int x[]={1,2,3,4,5,6,7,8,9,0};
//     int t;
//     cin>>t;
//     while(t--){
//         int press = 0;
//         int adjcent = 0;
//         int total = 0;
//         int a;
//         cin>> a;
//         int t = 0;
//         int pin[4];
//         while(a !=0){
//             pin[t]=(a%10);
//             t++;
//             a/=10;
//         }
//         for(int i =0 ; i<4;i++){
//             press = i+1;
//             adjcent = abs(x[pin[i]] - x[1]);
//             total+=min(press,adjcent);
//         }
//         cout<<total<<endl;
//     }
//     return 0;
// }

