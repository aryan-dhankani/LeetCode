class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s  = to_string(n);
        int arr1[11] = {0} ;
        for(char c : s)arr1[c - '0']++ ;
        for(int i = 0 ; i < 30 ; i++){
            int arr2[11];
            copy (arr1, arr1+11, arr2);
            string s1 = to_string(1<<i);
            int ret = 0 ;
            for(char c : s1)arr2[c - '0']-- ;
            for(int j = 0 ; j < 11 ; j++)
                if(arr2[j] == 0)ret++ ;
            if(ret == 11)return true;
            

        }
        return false ;
    }
};