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
    ListNode* reverseList(ListNode* head) {
        ListNode* ret = new ListNode();
        ListNode* nn = new ListNode();
        ListNode* temp = new ListNode();
        int count=0;
        int z=0;
        temp = head;
        
        while (temp) {
            count++;
            temp = temp->next;
        }
        if (count > 0) {		//to deal with case when list is empty
            int arr[count];
            int c=count;
        
            ret = nn;
        
            while (count>0) {
                temp = head;
                for (int i=count-1; i>0; i--) {
                    temp = temp->next;
                }
                arr[z++] = temp->val;		//to deal with issue of last element being 0 from straight copy
                count--;
            }
            for (z=0; z<c; z++) {
                nn->val = arr[z];
                temp = nn;
                nn->next = new ListNode();
                nn = nn->next;
            }
            nn = temp;
            nn->next = NULL;
        
            return ret;
        }
        else {
            return NULL;			//otherwise ret would be [0] which is not []
        }
    }
};