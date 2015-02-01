#ifndef _LEET_CODE_H_
#define _LEET_CODE_H_

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

TreeNode * TreeExample() {
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    return root;
}

#endif
