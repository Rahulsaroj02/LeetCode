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
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        // cout<<n<<" "<<slow->val;

        ListNode* se=slow->next;
        slow->next=nullptr;

        while(se){
            s.push(se);
            se=se->next;
        }


        ListNode* temp=head;
        while(!s.empty()){
            ListNode* help = temp->next;
            temp->next=s.top();
            s.pop();
            temp=temp->next;
            temp->next=help;
            temp=temp->next;
        }
    }
};