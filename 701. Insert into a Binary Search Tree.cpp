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
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(root==NULL)
        {
           TreeNode* node1 =  new TreeNode(val);
           return node1;
        }
        TreeNode* node = root;
        while(true)
        {
        
        if(val>=node->val)
        {
            if(node->right!=NULL)
            {
                node = node->right;
            }
            else
            {
                TreeNode* nodenew = new TreeNode(val);
                node->right = nodenew;
                break;
            }
            
            
        }

        else 
        {
            if(node->left!=NULL)
            {
                node=node->left;
            }
            else
            {
                TreeNode*nodenew = new TreeNode (val);
                node->left = nodenew;
                break;
            }
        }
    }
    return root;
        
    }
};


