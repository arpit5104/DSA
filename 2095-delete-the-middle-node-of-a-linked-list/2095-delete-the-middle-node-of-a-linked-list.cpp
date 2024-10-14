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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* temp=head;
        int n=0;

        while(temp!=NULL){
            n++;
            temp=temp->next;

        }

        if(n==1){
            head=NULL;
            return head;
        }

        int mid=n/2;
        temp = head;

        while(temp!=NULL){
            mid--;

            if(mid==0){
                ListNode* middle=temp->next;
                temp->next= temp->next->next;
                // free(middle);
                break;
            }

            temp=temp->next;
        }

        return head;
    }
};