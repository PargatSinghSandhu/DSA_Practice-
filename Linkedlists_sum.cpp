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

      int c=0,ones=0, arr [3];
      struct ListNode *l3, *last;
      struct ListNode *p,*l;
     
      l= new ListNode; 
      l->val=l1->val;
      l->next=NULL;   
      last=l;

      while(c!=3)
      {
          
          l3= new ListNode;         
          int temp=l1->val+l2->val;
          if(temp==NULL)
          {
              break;
          }
          
          if (temp>=0 && temp<=9)
          {            
              l3->val=temp+ones;
          }
          else
          {
              int digit = temp%10;
              int number = temp/10;
              l3->val=digit+ones;
              ones=number;             
          }
          l1=l1->next;
          l2=l2->next;
          
          l3->next=NULL;
          last->next=l3;
          last=l3;                 
          c++;
          cout<<l3->val;
      }     
      return l3;
    }     
};
