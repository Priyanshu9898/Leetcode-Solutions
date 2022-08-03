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
    
    ListNode* reverse(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* next = head;
        ListNode* prev = NULL;
        
        while(next != NULL){
            next = next -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
        
    }
    
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        
        
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        
        return count;
    }
    
    ListNode* solve(ListNode* l1, ListNode* l2){
        int carry = 0;
        
        int sum = 0;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(-1);
        ListNode* head = ans;
        
        while(temp1 != NULL && temp2 != NULL){
            
            sum = (temp1 -> val + temp2 -> val + carry);
            int rem = sum % 10;
            carry = sum / 10;
            
            head -> next = new ListNode(rem);
            head = head -> next;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
                     
        }
        
        while(temp1 != NULL){
            sum  = temp1 -> val + carry;
            int rem = sum % 10;
            carry = sum / 10;
            head -> next = new ListNode(rem);
            temp1 = temp1 -> next;
            head = head -> next;
        }
        while(temp2 != NULL){
            sum  = temp2 -> val + carry;
            int rem = sum % 10;
            carry = sum / 10;
            head -> next = new ListNode(rem);
            temp2 = temp2 -> next;
            head = head -> next;
        }
        if(carry > 0){
            head -> next = new ListNode(carry);
            head = head -> next;
        }
        
        
        ans = ans -> next;
        
        return ans;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL && l2 == NULL){
            return NULL;
        }
        
        if(l1 == NULL && l2 != NULL){
            return (l2);
        }
        
        if(l2 == NULL && l1 != NULL){
            return (l1);
        }
        
        int len1 = length(l1);
        int len2 = length(l2);;
        
        if(len1 >= len2){
            return solve(l1, l2);
        }
        else{
            return solve(l2 , l1);
        }
        
        return NULL;
        
    }
};