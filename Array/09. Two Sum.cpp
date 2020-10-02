class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,vector<int> > umap;
        
        for(int i = 0; i < nums.size(); i += 1){
            umap[nums[i]].push_back(i);
        }
        
        int flag = 0;
        for(int i = 0; i < nums.size(); i += 1){
            if(umap.find(target-nums[i]) != umap.end()){
                vector<int> &vec = umap[target-nums[i]];
                
                for(int pos: vec){
                    if(pos != i){
                        res.push_back(i);
                        res.push_back(pos);
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
        }
        
        return res;
        
    }
};