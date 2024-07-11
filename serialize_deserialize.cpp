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

string serialize(Node* root)
{
    string encoded_str = "";
    if(root == NULL)
    {
        encoded_str = "* "; // differentiating end of Tree by *
    }
    else
    {
        encoded_str = encoded_str + root->value + " ";  // Space separated values in pre-order traversal
        encoded_str = encoded_str + serialize(root->left);
        encoded_str = encoded_str + serialize(root->right);
    }
    return encoded_str;
}

string extractFirstNumberAndModifyString(string& input) {
    // Find the position of the first space
    int pos = input.find(" ");

    // If there is no space, the whole string is a number
    if (pos == string::npos) {
        firstNumber = input;
        input = "";
    } else {
        // Extract the first number
        firstNumber = input.substr(0, pos);

        // Modify the original string to exclude the first number and the space
        input = input.substr(pos + 1);
    }

    return firstNumber;
}

Node* deserialize(string encoded_input)
{
    string value = extractFirstNumberAndModifyString(encoded_input);
    if(value == "*")
    {
        return NULL;
    }
    else
    {
        Node* root = new Node(stoi(value), deserialize(encoded_input), deserialize(encoded_input));
        // extracting values in pre-order traversal
    }

    return root;
}
