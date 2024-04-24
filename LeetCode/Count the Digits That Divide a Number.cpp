class Solution {
public:
    int countDigits(int num) {
        int n =num;
        int cnt =0;
        while(n>0){
            int x = n%10;
            if(num%x == 0) cnt+=1;
            n/=10;
        }
        return cnt;
    }
};
