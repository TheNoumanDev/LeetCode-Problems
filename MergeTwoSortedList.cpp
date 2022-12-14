//Runtime: 10 ms, faster than 69.58% of C++ online submissions for Merge Two Sorted Lists.
//Memory Usage: 14.9 MB, less than 42.46% of C++ online submissions for Merge Two Sorted Lists.



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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(-1);
        ListNode* result = temp;
        
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        
        if(list1 != NULL)
        {
            temp->next = list1;
        }
    if(list2 != NULL)
    {
        temp->next = list2;
    }
         return result->next;
    }
};