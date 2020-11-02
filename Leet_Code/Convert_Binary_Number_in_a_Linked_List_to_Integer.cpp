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
    int ex(int b){
        int temp = 1;
        while(b){
            temp *= 2;
            b--;
        }return temp;
    }
    
    int getDecimalValue(ListNode* head) {
        vector<int> bin;
        int ans = 0;
        while(head){
            bin.push_back(head->val);
            head = head->next;
        }for(int i = bin.size()-1, k = 0; i >= 0; i--, k++){
            if (bin[i]) ans += ex(k);
        }return ans;
    }
};