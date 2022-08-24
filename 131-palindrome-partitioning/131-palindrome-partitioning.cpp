
    class Solution {
public:
    vector<vector<string>> ans;
    bool check(string str){
        string  t= str;
		reverse(t.begin(),t.end());
		if(t==str)return 1;
		return 0;
        
    }
    void partition(int i, string &s, vector<string> &temp){
        if(i>= s.size()){
            ans.push_back(temp);
            return;
        }
        for(int j= i+1; j<s.size()+1; j++){
            string t= s.substr(i, j-i);
            if(check(t)){
                temp.push_back(t);
                partition(j, s, temp);
                temp.pop_back();
            }
        }
            
        
    }
    vector<vector<string>> partition(string s) {
       
        vector<string> temp;
        partition(0, s, temp);
        return ans;
    }
};
