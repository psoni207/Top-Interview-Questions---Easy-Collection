class Solution {
    private:
        vector<int> arr, nums;
        int n;
public:
    Solution(vector<int>& nums) {
        this->nums = nums;
        arr = nums;
        n = nums.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        arr = nums;
        for(int i = n - 1; i >= 0; i -= 1){
            int ind = rand() % (i + 1);
            swap(arr[ind], arr[i]);
        }
        return arr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */