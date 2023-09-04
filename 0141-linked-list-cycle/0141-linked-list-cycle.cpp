/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*detection of cycle in a singly linked list using the flyod's algorithm or the hare and tortoise algorithm.*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
            ListNode* slow=head;// using the hare and tortoise method  the slow pointer moves by one step while the fast pointer moves by two steps if slow==fast then there is presence of the cycle hence the bool value will return true else the bool will return value as false. 
            ListNode* fast=head;
            while(fast!=NULL and fast->next!= NULL)
            {
                    slow=slow-> next;
                    fast= fast->next->next;
                    //node is connected to the prev->prev node just to be clear with the cicumstances
                    if(fast==slow)
                    {
                            return true;
                            
                            
                    }
            }return false;
    }
};