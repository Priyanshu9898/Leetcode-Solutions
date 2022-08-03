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
    int n;
    ListNode* dummy;
    
    Solution(ListNode* head) {
        ListNode* temp = head;
        dummy = new ListNode();
        n = 0;
        dummy -> next = head;
        while(head != NULL){
            head = head -> next;
            n++;
        }
        
    }
    
    int getRandom() {
        int num = rand() % n;
        ListNode* t = dummy;
        
        for(int i = 0; i < num; i++){
            t = t -> next;
        }
        
        return t -> next -> val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */