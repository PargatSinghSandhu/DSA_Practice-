      #include<iostream>
      using namespace std;
      
      struct Node
      {
          int data;
          struct Node*next;
          
      }*first=NULL;
      
      
      void create (int arr[],int n)
      {
          int i;
          struct Node*t, *last;
          first = new Node;
          first->data=arr[0];
          first->next=NULL;
          last=first;
          
          for (i=1;i<5;i++)
          {
              t = new Node;
              t->data=arr[i];
              t->next=NULL;
              last->next=t;
              last=t;
          }
          
          
      }
      
      void display ( struct Node*p)
      {
          while(p!=NULL)
          {
              cout<<p->data;
              p=p->next;
          }
      }
      
      
      void sum (arr1,arr2,int n)
      {
          int sum=0,arr3[10]={};
          for (i=0;i<n;i++)
          {
              temp=arr1[i]+arr[i];
              if (temp=>0 && temp=<9)
              {
                  arr3[i]=temp;
              }
              else
              {
                  
              }
          }
      }
      
      int main ()
      {
          int arr1[] = {1,2,3,4,5};
          int arr2[] = {6,7,8,9,10};
          sum(arr1,arr2,5)
          create (arr1,5);
          display(first);
          create (arr2,5);
          display(first);
          
      }
