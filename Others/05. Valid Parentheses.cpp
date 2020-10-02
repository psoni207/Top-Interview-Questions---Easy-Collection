class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> umap;
        umap['('] = ')';
        umap['{'] = '}';
        umap['['] = ']';
        
        for(int i = 0; i < s.size(); i += 1){
            if(s[i] == '(' || s[i] =='{' || s[i] =='['){
                st.push(s[i]);
            }else{
                if(!st.empty() && umap[st.top()] == s[i]){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        
        if(!st.empty()){
            return false;
        }
        return true;
    }
};