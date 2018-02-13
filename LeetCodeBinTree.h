//need 
//#include "LeetCodeBinTree.h"
//implementation is in LeetCodeBinTree.cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


#ifndef LEETCODEBINTREE
#define LEETCODEBINTREE

#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <iostream>

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :
	val(x), left(NULL), right(NULL) {}
};

TreeNode* constructTreeFromVector(vector<int>& nums, int start, int end);
TreeNode* constructTreeFromVector(vector<int>& nums);
void Traversal_inorder(TreeNode* root);

#endif

