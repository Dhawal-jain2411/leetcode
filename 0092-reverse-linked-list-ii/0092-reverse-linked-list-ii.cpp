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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        int count=0;
        ListNode* l;
        ListNode* r;
        ListNode* temp=head;
        ListNode* last;
        while(count<right){
            if(count==left-2){
                last=temp;
            }
            if(count==left-1){
                l=temp;
            }
            temp=temp->next;
            count++;
        }
        r=temp;
        ListNode* prev=r;
        int k=right-left+1;
        count=0;
        while(count<k){
            temp=l;
            l=l->next;
            temp->next=prev;
            prev=temp;
            count++;
        }
        if(left==1){
            head=prev;
        }
        else
        last->next=prev;
        return head;
    }
};