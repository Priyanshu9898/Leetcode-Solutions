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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int l1 = 0;
        int l2 = 0;
        ListNode * temp1 = headA;
        while(temp1 != NULL){
            l1++;
            temp1 = temp1 -> next;
        }
        ListNode * temp2 = headB;
        while(temp2 != NULL){
            l2++;
            temp2 = temp2 -> next;
        }
        
        int diff;
        
        if(l1 > l2){
            diff  = l1 - l2;
            
            temp1 = headA;
            
            while(temp1 != NULL && diff--){
                temp1 = temp1 -> next;
            }
            
            temp2 = headB;
            
        }
        else{
            diff = l2 - l1;
            
            temp2 = headB;
            
            while(temp2 != NULL && diff--){
                temp2 = temp2 -> next;
            }
            
            temp1 = headA;
            
        }
        
        
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        return NULL;
        
        
        
    }
};