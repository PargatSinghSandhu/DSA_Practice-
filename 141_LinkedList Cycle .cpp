/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         struct ListNode *temp, *pos;
            pos=head;
            temp=head;

            while(temp->next!=NULL)
            {
                temp=temp->next;
                pos=temp;
            }
            temp->next=pos;
            if(pos!=head)
            {              
                return true;
            }
            return false;
    }
};
