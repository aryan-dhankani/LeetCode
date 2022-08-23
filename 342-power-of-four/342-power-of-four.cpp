class Solution {
public:
    bool isPowerOfFour(int n) {
        int i = 30 ;
        while(i>=0 && 1<<i){
            if(n == 1<<i)return true;
            i -= 2 ;
        }
        return false;
    }
};