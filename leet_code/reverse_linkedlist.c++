        ListNode* current;
        ListNode* next;
        ListNode* prev;
        next = NULL;
        prev = NULL;

        current = head;

        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev