/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        
        TreeNode *root = helperBuildTree(nums, 0, nums.size()-1);
        return root;
    }
    
    TreeNode* helperBuildTree(vector<int> &nums, int low, int high){
        if(low > high) return NULL;
        
        int mid = (low + high + 1)/2;  
        TreeNode *root = new TreeNode(nums[mid]);
        
        root->left = helperBuildTree(nums, low, mid - 1);
        
        root->right = helperBuildTree(nums, mid + 1, high);  
  
        return root;  
    }
};