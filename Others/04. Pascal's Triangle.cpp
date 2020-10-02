class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res;
        if(numRows == 0) return res;
        vector<int> curr;
        curr.push_back(1);
        
        res.push_back(curr);
        if(numRows == 1){
            return res;
        }
        
        for(int  i = 2; i <= numRows; i += 1){
            vector<int> temp;
            temp.push_back(1);
            
            curr = res.back();
            for(int j = 1; j < curr.size(); j += 1){
                temp.push_back(curr[j] + curr[j-1]);
            }
            temp.push_back(1);
            
            res.push_back(temp);
        }
        
        return res;
        
    }
};