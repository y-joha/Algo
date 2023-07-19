struct TreeNode 
{
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isUnivalTree(TreeNode* root) 
{
    if(!root)
    {
        return true;
    }
    
    if(root->left && root->val != root->left->val)
    {
        return false;
    }

    if(root->right && root->val != root->right->val)
    {
        return false;
    }

    return isUnivalTree(root->left) && isUnivalTree(root->right);      
    
}