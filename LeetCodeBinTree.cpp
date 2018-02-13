#include "LeetCodeBinTree.h"
//jialianghang
//jialianghang
TreeNode* constructTreeFromVector(vector<int>& nums, 
	int start, int end)
{
	if(start == end) return NULL;
	
	int mid 		= start + (end - start)/2;
	
	TreeNode* root 	= new TreeNode(nums[mid]);
	root->left 		= constructTreeFromVector(nums,start,mid);
	root->right 	= constructTreeFromVector(nums,mid+1,end);
}

TreeNode* constructTreeFromVector(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	return constructTreeFromVector(nums,0,nums.size());
}

void Traversal_inorder(TreeNode* root)
{
	if(!root) return;
	Traversal_inorder(root->left);
	cout<<root->val<<endl;
	Traversal_inorder(root->right);
}