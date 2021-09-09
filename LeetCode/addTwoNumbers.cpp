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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = new ListNode();
        ListNode* temp2 = new ListNode();
        ListNode* nn = new ListNode();
        int remainder = 0;
        int count = 0;
        
        temp1 = l1;
        temp2 = l2;
        
        while (temp1 || temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
            count++;
        }
        temp1 = l1;
        temp2 = l2;
        int arr[count];
        int c = count;
        
        //lalala
        //can do this the way i did the last one - save additions in an array, reverse array into new linked list
        //or just take all the digits from linked list, save as int, add ints, and parse digits
        return nn;
    }
};