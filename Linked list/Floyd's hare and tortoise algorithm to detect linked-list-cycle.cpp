bool hasCycle(ListNode* head) {
        ListNode* A = head;
        if(A==NULL) return false;
        ListNode* B = head->next; 
        while (A!=B) { 
            if(B==NULL || B->next==NULL) return false;
            A = A->next;
            B= B->next->next; 
        } 
        return true;
    }
