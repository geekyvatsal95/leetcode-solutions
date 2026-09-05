class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        while(head!=NULL && head->val==val){
            ListNode* t = new ListNode(head->val);
            head=head->next;
            delete(t);
        }
        ListNode* temp = head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                ListNode* t = new ListNode(temp->next->val);
                temp->next=temp->next->next;
                delete(t);
            }
            else temp=temp->next;
        }
        return head;
        
    }
};