/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
    vector<int> inOrder;
public:
    BSTIterator(TreeNode *root) {
        stack<TreeNode*> mystack;
        TreeNode* p = root;
        while(!mystack.empty() || p) {
            if(p) {
                mystack.push(p);
                p = p->left;
            }
            else {
                p = mystack.top();
                mystack.pop();
                inOrder.push_back(p->val);
                p = p->right;
            }
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return inOrder.size() == 0 ? false: true;
    }

    /** @return the next smallest number */
    int next() {
        int result = inOrder[0];
        inOrder.erase(inOrder.begin());
        return result;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */