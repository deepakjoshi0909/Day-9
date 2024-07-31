
class Solution {
public:

    void solve(TreeNode* root, vector<int>& arr){
        if(root == NULL){
            return;
        }

        solve(root->left,arr);
        arr.push_back(root->val);
        solve(root->right,arr);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>arr;
        solve(root,arr);
        int minDiff = INT_MAX;

        for(int i=1;i<arr.size();i++){
            minDiff = min(minDiff, arr[i]-arr[i-1]);
        }
        return minDiff;

    }
};
