/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
// #include <algorithm>
// // #include <string>
// #include <vector>
string mapArr = "abcdefghijklmnopqrstuvwxyz";
class Solution {
public:
    
    void solve(TreeNode* root,string path, string& ans) {
        if (root == NULL) {
            // string = temp;
            return;
        }
        path += char('a'+root->val);
        if(root->left == NULL && root->right == NULL){
            reverse(path.begin(),path.end());
            if(ans.empty() || path <ans){
                ans =path;
            }
            reverse(path.begin(),path.end());
        }

        solve(root->left,path, ans);
        solve(root->right,path, ans);
        
    }
    string smallestFromLeaf(TreeNode* root) {
        if (root == NULL)
            return "";
        
        string ans;
        solve(root,"", ans);
        
        return ans;
    }
};
