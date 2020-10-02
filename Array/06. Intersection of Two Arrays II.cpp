class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> umap;
        
        for(int num: nums1){
            umap[num] += 1;
        }
        
        for(int num: nums2){
            if(umap.find(num) != umap.end() && umap[num] != 0){
                res.push_back(num);
                umap[num] -= 1;
            }
        }
        
        return res;
    }
};