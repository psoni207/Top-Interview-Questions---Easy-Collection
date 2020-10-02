class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0){
            return "";
        }
        string prefix = strs[0];        
        
        for(int i = 1; i < n; i += 1){
            string word = strs[i];
            string res = "";
            int j = 0, k = 0;
            
            while(j < prefix.size() && k < word.size() && prefix[j] == word[k]){
                res += prefix[j];
                j += 1;
                k += 1;
            }
            
            prefix = res;
        }
        
        return prefix;
    }
};