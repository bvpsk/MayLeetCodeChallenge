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
    bool isCousins(TreeNode* root, int x, int y) {
        
        TreeNode* node = NULL;
        TreeNode* X = NULL;
        TreeNode* Y = NULL;
        TreeNode* Xp = NULL;
        TreeNode* Yp= NULL;
        // node = root;
        queue<TreeNode*> q;
        if(x == root->val || y == root->val) return false;
        root->val = 0;
        q.push(root);
        while(!q.empty()){
            node = q.front();
            q.pop();
            cout << node->val << endl;
            
            if(node->left != NULL){
                q.push(node->left);
                if(X == NULL) {
                    if(x == node->left->val) {X = node->left; Xp = node;}
                }
                if(Y == NULL) {
                    if(y == node->left->val) {Y = node->left; Yp = node;}
                }
                node->left->val = node->val + 1;
            }
            
            if(node->right != NULL){
                q.push(node->right);
                if(X == NULL) {
                    if(x == node->right->val) {X = node->right; Xp = node;}
                }
                if(Y == NULL) {
                    if(y == node->right->val) {Y = node->right; Yp = node;}
                }
                node->right->val = node->val + 1;
            }
            if(Y != NULL && X != NULL) break;
        }
        
        if(X->val == Y->val && Xp != Yp) return true;
        
        return false;
    }
};