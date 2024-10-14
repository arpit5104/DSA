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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=head;
        int m=0;
        while(temp!=NULL){
            m++;
            temp= temp->next;
        }
        if(head==NULL || head->next==NULL) return NULL;

        int num=m-n;

        temp=head;

        while(temp!=NULL){
            num--;
            
            if(num==0){
                ListNode* del=temp;
                del->next=del->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};