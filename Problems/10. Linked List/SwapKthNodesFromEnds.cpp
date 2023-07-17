Node *swapkthnode(Node* head, int num, int K)
{
   if(K>num)return head;
   
   if(K == (num-K+1))return head;
   
   Node *beg = head; Node *beg_prev = NULL;
   Node *end = head; Node *end_prev = NULL;
   
   for(int i=1; i<K; i++){
       beg_prev  = beg;
       beg = beg->next;
   }
   
   
   for(int i=1; i<num-K+1; i++){
       end_prev  = end;
       end = end->next;
   }
   if(beg_prev != NULL){
       beg_prev->next = end;
   }
   
   if(end_prev != NULL){
       end_prev->next = beg;
   }
   
   Node *temp = beg->next;
   beg->next = end->next;
   end->next = temp;
   
   if(K==1)
   return head = end;
   
   if(K==num)
   return head = beg;
   
   return head;
}