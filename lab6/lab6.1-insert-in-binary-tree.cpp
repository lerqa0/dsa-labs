//insert into a binary search tree

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);

        if (root == nullptr) {
            return newNode;
        }

        TreeNode* current = root;

        while (true) {
            if (val < current->val) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    break;
                }
                current = current->left;
            }
            else {
                if (current->right == nullptr) {
                    current->right = newNode;
                    break;
                }
                current = current->right;
            }
        }
        return root;
    }
};
