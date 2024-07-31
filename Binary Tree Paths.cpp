class Solution {
public:
    void constructPaths(TreeNode* node, string path, vector<string>& paths) {
        if (node != nullptr) {
            path += to_string(node->val);
            if (node->left == nullptr && node->right == nullptr) {  
                paths.push_back(path); 
            } else {
                path += "->";  
                constructPaths(node->left, path, paths);
                constructPaths(node->right, path, paths);
            }
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        constructPaths(root, "", paths);
        return paths;
    }
};
