ListNode* start;
        ListNode* end;
        ListNode* temp = list1;
        
        int cnt = 0;

        while(temp != NULL){
            if(cnt == a){
                start = temp;
            }
            if(cnt == b){
                end = temp;
            }
          //  cout<<temp->val<<endl;
            temp = temp->next;
            cnt++;
        }
        cout<<start->val<<" "<<end->val<<endl;

        ListNode* temp2 = list2;
        temp = list1;

        cnt = 0;
        while(temp != NULL){
            if(cnt == a-1){
                temp->next = list2;
                cout<<temp->val<<endl;
                while(temp2->next != NULL){
                    temp2 = temp2->next;
                }

                temp2->next = end->next;
                cout<<temp2->val<<endl;
                break;
            }
            temp = temp->next;
            cnt++;
        }

        return list1;