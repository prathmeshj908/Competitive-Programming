class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto& k:operations){
            if(k[1]=='+') x++;
            else x--;

        }
        return x;
        // for(auto  &x:operations){
        //     if(x=="++X"){
        //         ans++;
        //     }
        //     else if(x=="X++"){
        //         ans++;
        //     }
        //     else if(x=="--X"){
        //         ans--;
        //     }
        //     else if(x=="X--"){
        //         ans--;
        //     }
        // }
        // return ans;
    }
};