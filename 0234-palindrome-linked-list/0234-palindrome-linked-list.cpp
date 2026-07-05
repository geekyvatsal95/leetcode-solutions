class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* nextNode=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //find left middle
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head1=reverseList(slow->next);
        ListNode* temp1=head;
        ListNode* temp2=head1;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val) {
                reverseList(head1);
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        reverseList (head1);
        return true;



    }
};