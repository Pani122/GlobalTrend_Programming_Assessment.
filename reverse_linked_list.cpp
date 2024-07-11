#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

/**
 * Definition for singly-linked list.
 * class Node {
 *     int value;
 *     Node *next;
 *     Node(int val, Node *next) : value(val), next(next) {}
 * };
 */

Node* reverseList(Node* head) {
    Node* prev = NULL;   // prev keep tracks previous node 
    Node* curr = head;   // curr keep tracks current node
    Node* forward;
    while(curr != NULL) {
        forward = curr->next;  // temporarily storing the next node
        curr->next = prev;     // swap nodes
        prev = curr;
        curr = forward;        // re-assigning next node to curr for next iteration
    }
    return prev; 
};
