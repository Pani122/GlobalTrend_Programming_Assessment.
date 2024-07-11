#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

/**
 * Definition for a binary tree node.
 * struct Node {
 *     int value;
 *     Node *left;
 *     Node *right;
 *     Node(int val, Node *left, Node *right) : value(val), left(left), right(right) {}
 * };
 */

int max_sum = INT_MIN;  // setting it to minimum possible integer
int maxPathSum(Node* root) {
    if(root == NULL) return 0;  // base case
    int leftpath_max = max(maxPathSum(root->left), 0);  // check whether sum along this path is positive
    int rightpath_max = max(maxPathSum(root->right), 0);    // if it isn't positive then don't consider this into path
    int new_total = root->value + leftpath_max + rightpath_max; // consider sum along the path including root
    max_sum = max(max_sum, new_total);
    return root->value + max(leftpath_max, rightpath_max);
}
