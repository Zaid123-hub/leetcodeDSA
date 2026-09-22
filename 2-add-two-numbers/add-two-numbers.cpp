class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*t1=l1;
        ListNode*t2=l2;
        ListNode*dummy = new ListNode(0);
        ListNode*t3=dummy;
        int carry=0;
        while(t1 || t2 || carry != 0){
            int sum=0;
            if(t1){
                sum += t1->val;
                t1 = t1->next;
            }
            if(t2){
                sum += t2->val;
                t2 = t2->next;
            }
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            t3->next = new ListNode(sum);
            t3 = t3->next;
        }
        return dummy->next;

    }
};