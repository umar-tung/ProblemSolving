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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        //creating temporary head
        
        ListNode* fakehead = new ListNode(0);
        ListNode* iter = fakehead;
        
        //creating temporary pntrs
        ListNode* l1ptr = l1;
        ListNode* l2ptr = l2;
        
        int result = 0;
        int carry =0;
        while( l1ptr != NULL || l2ptr != NULL || carry ==1){
            
            if(l1ptr != NULL){
                result = l1ptr->val;
                l1ptr =l1ptr->next;
            }
            
            if(l2ptr !=NULL){
                result = result +l2ptr->val;
                l2ptr=l2ptr->next;
            }
            
            result = result + carry;
            if(result >=10){
                result = result % 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            
            ListNode* sol = new ListNode(result);
            
            iter->next = sol;
            
            iter=iter->next;
            
            result =0;
            
        }
        
        return fakehead->next;
        
        
    }
};
