/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previousNode = nullptr;
        ListNode* currentNode = head;
        while (currentNode != nullptr)
        {
            ListNode* nextNodeTemp = currentNode -> next;
            currentNode -> next = previousNode;
            previousNode = currentNode;
            currentNode = nextNodeTemp;
        }
        ListNode* tempval = previousNode;
        while(tempval != nullptr)
        {
            std::cout << tempval->val << "\n";
            tempval = tempval -> next;
        }
        return previousNode;
    }
    
};

