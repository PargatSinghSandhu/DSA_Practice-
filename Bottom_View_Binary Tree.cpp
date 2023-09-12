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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        diam(root, maxi);
        return maxi;
        
    }


    int diam(TreeNode* root, int & maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lhsum = max(0, diam(root->left, maxi));
        int rhsum = max(0, diam(root->right, maxi));

        maxi = max(maxi, (lhsum+rhsum+root->val));

        return root->val+ max(lhsum, rhsum);
        
    }
};
