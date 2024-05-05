/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */

// @lc code=start
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // Solution 1
        node->val = node->next->val;
        node->next = node->next->next;
        //   Solution 2
        // *node = *node->next;
    }
};
// @lc code=end
