class Solution {
public:
    
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return head;
        ListNode* temp=head;
        if(head->next==NULL)return head;
        ListNode* head2=head->next;
        ListNode* temp1=head->next;
        while(1){
            temp->next=temp1->next;
            if(temp->next==NULL)break;
            
            temp=temp->next;
            temp1->next=temp->next;
            if(temp1->next==NULL)break;
            temp1=temp1->next;
            
        }
        temp->next=head2;
        return head;
    }
};