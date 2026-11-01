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
    void reorderList(ListNode* head) {
        
        
        ListNode* cur = head;
        while(cur->next !=nullptr  ){
            ListNode* save = cur->next;
            int vl = cur->next->val;
            ListNode* done = cur;
            while(done->next->next != nullptr){
                done=done->next;
            }
            if(done->next->val == vl) break;
            
            cur->next = done->next;
            cur->next->val = done->next->val;
            cur->next->next = save ;
            cur->next->next->val = vl;

            done->next = nullptr;
            cur = cur->next->next;
            

        }
       
    }
   

};
