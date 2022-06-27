
      /** [2](https://leetcode.com/problems/add-two-numbers/)
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    ListNode* result;
  if(l1 == NULL){
        result = reverse(&l1); ;
  }
    else if(l2==NULL){
        result = reverse(&l2);
    }
    else{
        ListNode* node1 = reverse(&l1);
        ListNode* node2 = reverse(&l2);
         ListNode* temp, head;
        result = head; 
        
        while(node1 != NULL || node2 != NULL){
            if(result== NULL){
                 temp->val = node1->val+ node2->val;
                head = temp;
                head->next = NULL;
            }
            temp->val =  node1->val+ node2->val;
            head->next = temp;
            head = temp; 
        }
        
    }
}
