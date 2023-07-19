
bool CountSingleSubBranchRecursive(Node* root, int &count)
{
	bool left = 0;
	bool right = 0;

	if(null == root)
	{
		return true;
	}

	left = CountSingleSubBranchRecursive(root->left, count);
	right = CountSingleSubBranchRecursive(root->right, count);

	if(false == left || false == right)
	{
		return false;
	}

	if(root->left && root->data != root->left->data)
	{
		return false;
	}

	if(root->right && root->data != root->right->data)
	{
		return false;
	}

	count++;
	return true;

}


int CountSingleSubBranch(Node_t * root)
{
	int count = 0;

	CountSingleSubBranchRecursive(root, count);

	return count;
}