class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        while(head!=NULL && head->val==val){
            ListNode* t = head;
            head=head->next;
            delete(t);
        }
        ListNode* temp = head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                ListNode* t = temp->next;
                temp->next=temp->next->next;
                delete(t);
            }
            else temp=temp->next;
        }
        return head;
        
    }
};