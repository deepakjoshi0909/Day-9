
class Solution {
public:

    void solve(TreeNode* root,int& sum,bool isLeft){
        if(root == NULL){
            return ;
        }

        if(root->left == NULL && root->right == NULL){
            if(isLeft){
                sum += root->val;
            }
        }

        solve(root->left,sum,true);
        solve(root->right,sum,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if(root == NULL){
            return NULL;
        }
        solve(root,ans,false);
        return ans;
    }
};
