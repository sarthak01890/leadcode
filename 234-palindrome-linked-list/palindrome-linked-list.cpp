class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return true;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while(curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Compare first half and reversed second half
        ListNode* p1 = head;
        ListNode* p2 = prev;

        while(p2) {
            if(p1->val != p2->val)
                return false;

            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
};