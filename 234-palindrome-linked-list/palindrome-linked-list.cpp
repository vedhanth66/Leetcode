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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        vector<int> rev;
        while(temp != NULL){
            rev.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 0; i < rev.size(); i++){
            if(rev[i] != rev[rev.size() - i - 1]){
                return false;
            }
        }
        return true;
    }
};