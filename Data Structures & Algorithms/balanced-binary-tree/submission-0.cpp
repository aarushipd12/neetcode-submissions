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
    int height(TreeNode* root){
        if (root==nullptr) return 0;
        queue<TreeNode*> q;
        int ans = 0;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();

            for(int i=0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans++;
        }
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        if (root==nullptr) return true;
        int hleft = height(left);
        int hright = height(right);

        if (abs(hright - hleft) <= 1){
            return isBalanced(root->left) && isBalanced(root->right);
        } 
        return false;
    }
};
