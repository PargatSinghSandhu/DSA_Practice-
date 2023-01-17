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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

      int c=0,ones=0;
      struct ListNode *l3, *t, *last;
      struct ListNode *p;
      
      while(p!=NULL)
      {
        c++;
        p=p->next;
      }
      for (int i=0;i<c;i++)
      {
          int temp1= 2;
          int temp2= 3;
          int temp=temp1+temp2;
          if (temp>=0 && temp<=9)
          {
              //l3->val=temp+ones;
              //t = new ListNode;
              int d =1+2;
              //t->next=NULL;
              //last->next=t;
              //last=t;
          }
          else
          {
              //int digit = temp%10;
              //int number = temp/10;
              //l3[i]=digit+ones;
              int y =1+2;
              //ones=number;
               
          }

          //t->next=NULL;
          //last->next=t;
          //last=t;
      
      }
      return l3;
    }     
};
