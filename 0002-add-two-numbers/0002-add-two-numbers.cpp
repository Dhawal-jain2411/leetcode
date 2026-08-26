class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummyHead(0);   
        ListNode* current = &dummyHead;
        int carry = 0;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
            int sum = carry;
            
            if (temp1 != nullptr) {
                sum += temp1->val;
                temp1 = temp1->next;
            }
            
            if (temp2 != nullptr) {
                sum += temp2->val;
                temp2 = temp2->next;
            }
            
            carry = sum / 10;                     // Calculate new carry
            current->next = new ListNode(sum % 10); // Create new node for the digit
            current = current->next;              // Move pointer forward
        }
        
        return dummyHead.next;
    }
};