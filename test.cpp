#include "LeetCodeBinTree.h"

int main()
{
	std::vector<int> nums = {1,4,2,8,5,7};
	TreeNode* root = constructTreeFromVector(nums);
	Traversal_inorder(root);
	return 0;
}