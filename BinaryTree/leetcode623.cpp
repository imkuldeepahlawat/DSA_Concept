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
    void solve(TreeNode* root,int level, int val, int depth){
        if(root ==NULL ||level  >depth) return;

        if(level+1 == depth){
            TreeNode* newLeft =new  TreeNode(val);
            TreeNode* newRight =new  TreeNode(val);
            TreeNode* oldLeft = root->left;
            TreeNode* oldRight = root->right;
            newLeft->left = oldLeft;
            newRight->right = oldRight;
            root->left = newLeft;
            root->right = newRight;
        }
        solve(root->left,level+1,val,depth);
        solve(root->right,level+1,val,depth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot =new  TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        solve(root,1,val,depth);
        return root;   
    }
};
