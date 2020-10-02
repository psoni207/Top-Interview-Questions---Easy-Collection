class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sum = (n * (n + 1))/ 2;
        
        int total = 0;
        for(int num: nums){
            total += num;
        }
        
        return (sum - total);
        
    }
};