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
class Solution
{
public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return 0;
        if (root->val > key)
        {
            root->left = deleteNode(root->left, key);
            return root;
        }
        else if (root->val < key)
        {
            root->right = deleteNode(root->right, key);
            return root;
        }
        else
        {
            // Leaf node
            if (!root->left && !root->right)
            {
                delete root;
                return NULL;
            }
            //  One child exists
            //    Left child exists only
            else if (root->left && !root->right)
            {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            //  right child exists only
            else if (!root->left && root->right)
            {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            //  If 2 child exists
            else
            {
                TreeNode *parent = root;
                TreeNode *child = root->left;
                // Find the right most element in the child
                while (child->right)
                {
                    parent = child;
                    child = child->right;
                }
                if (root != parent)
                {
                    parent->right = child->left;
                    child->left = root->left;
                    child->right = root->right;
                    delete root;
                    return child;
                }
                else
                {
                    child->right = root->right;
                    delete root;
                    return child;
                }
            }
        }
    }
};