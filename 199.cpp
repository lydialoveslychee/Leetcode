/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root == NULL) return result;
        vector<TreeNode*> cur;
        cur.push_back(root);
        while(cur.size() > 0) {
            result.push_back(cur[cur.size()-1]->val);
            vector<TreeNode*> sub;
            for(int i = 0; i < cur.size(); i++) {
                if(cur[i]->left) sub.push_back(cur[i]->left);
                if(cur[i]->right) sub.push_back(cur[i]->right);
            }
            cur = sub;
        }
        return result;
    }
};