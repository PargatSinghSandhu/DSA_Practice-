/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/



bool isleaf(TreeNode<int> *root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
    else{
        return false;
    }
}

void leftboundary(TreeNode<int> *root, vector<int>&ans)
{
    TreeNode<int>* node = root->left;
    while(node)
    {
        if(!isleaf(node))
        {
            ans.push_back(node->data);
        }
        if(node->left)
        {
            node= node->left;
        }
        else
        node = node->right;
    }
}

void rightboundary(TreeNode<int> *root, vector<int>&ans)
{
    TreeNode<int>* node = root->right;
    vector<int> sub; 
    while(node)
    {
        if(!isleaf(node))
        {
            sub.push_back(node->data);
        }
        if(node->right)
        {
            node = node->right;
        }
        else{
            node = node->left;
        }
       
    }
    for(int i = sub.size()-1;i>=0;i--)
    {
        ans.push_back(sub[i]);
    }


}

void leavesnodes(TreeNode<int> *root, vector<int>&ans)
{
    if(isleaf(root))
    {
        ans.push_back(root->data);
        return;
    } 
    if(root->left)leavesnodes(root->left, ans);
    if(root->right)leavesnodes(root->right, ans);
}



vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.

    vector<int> ans;
    if(root==NULL) return ans;
    if(!isleaf(root)) ans.push_back(root->data);
    leftboundary(root, ans);
    leavesnodes(root, ans);
    rightboundary(root, ans);
    
    return ans;

}
