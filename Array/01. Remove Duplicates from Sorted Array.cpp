class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int i = 1;
        
        int start = 0;
        while(1){
            while(i < n && nums[i] == nums[i-1]){
                i += 1;
            }
            
            nums[start++] = nums[i-1];
            if(i == n){
                break;
            }
            i += 1;
        }
        
        return start;
    }
};