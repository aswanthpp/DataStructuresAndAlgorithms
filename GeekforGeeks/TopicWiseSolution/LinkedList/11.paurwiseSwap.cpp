/*
Given a singly linked list, write a function to swap elements pairwise. For example, if the linked list is 1->2->3->4->5 then the function should 
change it to 2->1->4->3->5, and if the linked list is 1->2->3->4->5->6 then the function should change it to 2->1->4->3->6->5.
*/
void pairWiseSwap(struct node *head)
{
   // The task is to complete this method
   struct node *p=head;
   while(p!=NULL && p->next!=NULL){
       int t=p->data;
       p->data=p->next->data;
       p->next->data=t;
       p=p->next->next;
   }
  
}
